//
//  StyleOverflowClipMargin.cpp
//  WebCore
//
//  Created by Thanugundla, Suraj on 12/17/25.
//

#include "StyleOverflowClipMargin.h"
#include "CSSPrimitiveValue.h"
#include "CSSValueList.h"
#include "StyleBuilderChecking.h"
#include "CSSPrimitiveValueMappings.h"
#include "AnimationUtilities.h"
#include "RenderStyleInlines.h"
#include "rendering/style/RenderStyleConstants.h"

namespace WebCore {
namespace Style {

using namespace CSS::Literals;

auto CSSValueConversion<OverflowClipMargin>::operator()(BuilderState& state, const CSSValue& value) -> OverflowClipMargin
{
    // RefPtr primitiveValue = requiredDowncast<CSSPrimitiveValue>(state, value);

    // if (!primitiveValue) {
    //     return { 0_css_px };
    // }

    // if (primitiveValue->isValueID()) {
    //     auto overflowClipBox = fromCSSValue<OverflowClipBox>(*primitiveValue);
    //     switch(overflowClipBox) {
    //     case OverflowClipBox::PaddingBox:
    //         return { 0_css_px };
    //     case OverflowClipBox::BorderBox:
    //     case OverflowClipBox::ContentBox:
    //         return { overflowClipBox };
    //     };
    // }

    // if (primitiveValue->isLength()) {
    //     return { toStyleFromCSSValue<OverflowClipMargin::Length>(state, *primitiveValue) };
    // }

    auto list = requiredListDowncast<CSSValueList, CSSValue, 2>(state, value);

    if (!list) {
        return { 0_css_px };
    }

    Ref value0 = list->item(0);
    Ref value1 = list->item(1);
    RefPtr firstValuePtr = requiredDowncast<CSSPrimitiveValue>(state, value0);
    RefPtr secondValuePtr = requiredDowncast<CSSPrimitiveValue>(state, value1);

    if (firstValuePtr->isValueID()) {
        auto overflowClipBox = fromCSSValue<OverflowClipBox>(*firstValuePtr);

        if (!secondValuePtr->isLength()) {
            return { overflowClipBox };
        }

        auto length = toStyleFromCSSValue<OverflowClipMargin::Length>(state, *secondValuePtr);

        switch(overflowClipBox) {
        case OverflowClipBox::PaddingBox:
                return { length };
        case OverflowClipBox::BorderBox:
        case OverflowClipBox::ContentBox:
                return { overflowClipBox, length };
        }
    }

    if (firstValuePtr->isLength()) {
        auto length = toStyleFromCSSValue<OverflowClipMargin::Length>(state, *firstValuePtr);

        if (!secondValuePtr->isValueID()) {
            return { length };
        }

        auto overflowClipBox = fromCSSValue<OverflowClipBox>(*secondValuePtr);

        switch(overflowClipBox) {
        case OverflowClipBox::PaddingBox:
                return { length };
        case OverflowClipBox::BorderBox:
        case OverflowClipBox::ContentBox:
                return { overflowClipBox, length };
        }
    }

    return { 0_css_px };
}

// MARK: - Blending

auto Blending<OverflowClipMargin>::canBlend(const OverflowClipMargin& a, const OverflowClipMargin& b) -> bool
{
    if (a.m_length.isZero() && b.m_length.isZero()) {

    }
    return false;
}

auto Blending<OverflowClipMargin>::blend(const OverflowClipMargin& a, const OverflowClipMargin& b, const RenderStyle& aStyle, const RenderStyle& bStyle, const BlendingContext& context) -> OverflowClipMargin
{
    if (context.isDiscrete) {
        ASSERT(!context.progress || context.progress == 1);
        return context.progress ? b : a;
    }

    // ASSERT(a.m_type == b.m_type);
    if (aStyle.isDisplayInlineType() && bStyle.isDisplayInlineType()) {

    }
    return OverflowClipMargin { 0_css_px };
}

} // namespace Style
} // namespace WebCore
