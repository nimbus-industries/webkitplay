//
//  StyleOverflowClipMargin.h
//  WebCore
//
//  Created by Thanugundla, Suraj on 12/16/25.
//

#pragma once

#include <WebCore/CSSValueKeywords.h>
#include <WebCore/RenderStyleConstants.h>
#include <WebCore/StylePrimitiveNumericTypes.h>
#include <WebCore/StyleValueTypes.h>

namespace WebCore {
namespace Style {

using namespace CSS::Literals;

struct OverflowClipMargin {
    using Length = Style::Length<CSS::Nonnegative, float>;

    OverflowClipMargin(CSS::ValueLiteral<CSS::LengthUnit::Px> length)
        : m_type { OverflowClipMarginType::Length }
        , m_length { length }
        , m_clipBox { OverflowClipBox::PaddingBox }
    {
    }

    OverflowClipMargin(Length length)
        : m_type { OverflowClipMarginType::Length }
        , m_length { length }
        , m_clipBox { OverflowClipBox::PaddingBox }
    {
    }

    OverflowClipMargin(OverflowClipBox clipBox)
        : m_type { OverflowClipMarginType::OverflowClipBox }
        , m_length { 0_css_px }
        , m_clipBox { clipBox }
    {
    }

    OverflowClipMargin(OverflowClipBox clipBox, Length length)
        : m_type { OverflowClipMarginType::LengthAndOverflowClipBox }
        , m_length { length }
        , m_clipBox { clipBox }
    {
    }
    template<typename... F> decltype(auto) switchOn(F&&... f) const
    {
        auto visitor = WTF::makeVisitor(std::forward<F>(f)...);
        switch (m_type) {
        case OverflowClipMarginType::Length:
            return visitor(m_length);
        case OverflowClipMarginType::OverflowClipBox:
            return visitor(m_clipBox);
        case OverflowClipMarginType::LengthAndOverflowClipBox:
            return visitor(SpaceSeparatedTuple { m_clipBox, m_length });
        }
        RELEASE_ASSERT_NOT_REACHED();
    }

    bool operator==(const OverflowClipMargin&) const = default;
private:
    friend struct Blending<OverflowClipMargin>;

    // OverflowClipMargin(Length length, OverflowClipBox clipBox)
    //     : m_type { OverflowClipMarginType::LengthAndOverflowClipBox }
    //     , m_length { length }
    //     , m_clipBox { clipBox }
    // {
    // }

    OverflowClipMarginType m_type;
    Length m_length;
    OverflowClipBox m_clipBox;
};

// MARK: - Conversion

template<> struct CSSValueConversion<OverflowClipMargin> { auto operator()(BuilderState&, const CSSValue&) -> OverflowClipMargin; };

// MARK: - Blending

template<> struct Blending<OverflowClipMargin> {
    auto canBlend(const OverflowClipMargin&, const OverflowClipMargin&) -> bool;
    auto blend(const OverflowClipMargin&, const OverflowClipMargin&, const RenderStyle&, const RenderStyle&, const BlendingContext&) -> OverflowClipMargin;
};

} // namespace Style
} // namespace WebCore

DEFINE_VARIANT_LIKE_CONFORMANCE(WebCore::Style::OverflowClipMargin)
