/*
 * Copyright (C) 2000 Lars Knoll (knoll@kde.org)
 *           (C) 2000 Antti Koivisto (koivisto@kde.org)
 *           (C) 2000 Dirk Mueller (mueller@kde.org)
 * Copyright (C) 2003-2023 Apple Inc. All rights reserved.
 * Copyright (C) 2014-2021 Google Inc. All rights reserved.
 * Copyright (C) 2006 Graham Dennis (graham.dennis@gmail.com)
 * Copyright (C) 2025-2026 Samuel Weinig <sam@webkit.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 */

#pragma once

#include <WebCore/StyleComputedStyle.h>

namespace WebCore {

// class AutosizeStatus;
// class BorderData;
// class BorderValue;
// class Color;
// class Element;
// class FloatPoint;
// class FloatSize;
// class FloatPoint3D;
// class FloatRect;
// class FontCascade;
// class FontCascadeDescription;
// class FontMetrics;
// class FontSelectionValue;
// class HitTestRequest;
// class IntSize;
// class LayoutRect;
// class LayoutSize;
// class LayoutUnit;
// class OutlineValue;
// class RenderElement;
// class RenderStyle;
// class SVGRenderStyle;
// class ScrollTimeline;
// class StyleInheritedData;
// class StyleNonInheritedData;
// class StyleRareInheritedData;
// class TransformationMatrix;
// class ViewTimeline;

// enum CSSPropertyID : uint16_t;

// enum class AlignmentBaseline : uint8_t;
// enum class ApplePayButtonStyle : uint8_t;
// enum class ApplePayButtonType : uint8_t;
// enum class AppleVisualEffect : uint8_t;
// enum class BackfaceVisibility : uint8_t;
// enum class BlendMode : uint8_t;
// enum class FlowDirection : uint8_t;
// enum class BlockStepAlign : uint8_t;
// enum class BlockStepInsert : uint8_t;
// enum class BlockStepRound : uint8_t;
// enum class BorderCollapse : bool;
// enum class BorderStyle : uint8_t;
// enum class BoxAlignment : uint8_t;
// enum class BoxDecorationBreak : bool;
// enum class BoxDirection : bool;
// enum class BoxLines : bool;
// enum class BoxOrient : bool;
// enum class BoxPack : uint8_t;
// enum class BoxSizing : bool;
// enum class BreakBetween : uint8_t;
// enum class BreakInside : uint8_t;
// enum class BufferedRendering : uint8_t;
// enum class CaptionSide : uint8_t;
// enum class Clear : uint8_t;
// enum class ColumnAxis : uint8_t;
// enum class ColumnFill : bool;
// enum class ColumnProgression : bool;
// enum class ColumnSpan : bool;
// enum class CompositeOperator : uint8_t;
// enum class ContainerType : uint8_t;
// enum class ContentDistribution : uint8_t;
// enum class ContentPosition : uint8_t;
// enum class ContentVisibility : uint8_t;
// enum class CursorType : uint8_t;
// enum class CursorVisibility : bool;
// enum class DisplayType : uint8_t;
// enum class DominantBaseline : uint8_t;
// enum class EmptyCell : bool;
// enum class EventListenerRegionType : uint64_t;
// enum class FieldSizing : bool;
// enum class FillAttachment : uint8_t;
// enum class FillBox : uint8_t;
// enum class FillSizeType : uint8_t;
// enum class FlexDirection : uint8_t;
// enum class FlexWrap : uint8_t;
// enum class Float : uint8_t;
// enum class FontOpticalSizing : bool;
// enum class FontOrientation : bool;
// enum class FontSmoothingMode : uint8_t;
// enum class FontSynthesisLonghandValue : bool;
// enum class FontVariantCaps : uint8_t;
// enum class FontVariantEmoji : uint8_t;
// enum class FontVariantPosition : uint8_t;
// enum class Hyphens : uint8_t;
// enum class ImageRendering : uint8_t;
// enum class InputSecurity : bool;
// enum class InsideLink : uint8_t;
// enum class Isolation : bool;
// enum class ItemPosition : uint8_t;
// enum class Kerning : uint8_t;
// enum class LineAlign : bool;
// enum class LineBreak : uint8_t;
// enum class LineCap : uint8_t;
// enum class LineJoin : uint8_t;
// enum class LineSnap : uint8_t;
// enum class ListStylePosition : bool;
// enum class MarqueeBehavior : uint8_t;
// enum class MarqueeDirection : uint8_t;
// enum class MaskType : uint8_t;
// enum class MathShift : bool;
// enum class MathStyle : bool;
// enum class NBSPMode : bool;
// enum class NinePieceImageRule : uint8_t;
// enum class NonCJKGlyphOrientation : bool;
// enum class ObjectFit : uint8_t;
// enum class Order : bool;
// enum class OutlineStyle : uint8_t;
// enum class Overflow : uint8_t;
// enum class OverflowAnchor : bool;
// enum class OverflowClipBox : uint8_t;
// enum class OverflowContinue : bool;
// enum class OverflowWrap : uint8_t;
// enum class OverscrollBehavior : uint8_t;
// enum class PaginationMode : uint8_t;
// enum class PaintBehavior : uint32_t;
// enum class PointerEvents : uint8_t;
// enum class PositionType : uint8_t;
// enum class PrintColorAdjust : bool;
// enum class PseudoId : uint8_t;
// enum class RubyPosition : uint8_t;
// enum class RubyAlign : uint8_t;
// enum class RubyOverhang : bool;
// enum class ScrollAxis : uint8_t;
// enum class ScrollSnapStop : bool;
// enum class StyleAppearance : uint8_t;
// enum class StyleColorOptions : uint8_t;
// enum class TableLayoutType : bool;
// enum class TextBoxTrim : uint8_t;
// enum class TextCombine : bool;
// enum class TextDecorationSkipInk : uint8_t;
// enum class TextDecorationStyle : uint8_t;
// enum class TextGroupAlign : uint8_t;
// enum class TextJustify : uint8_t;
// enum class TextOverflow : bool;
// enum class TextRenderingMode : uint8_t;
// enum class TextSecurity : uint8_t;
// enum class TextTransform : uint8_t;
// enum class TextWrapMode : bool;
// enum class TextWrapStyle : uint8_t;
// enum class TextZoom : bool;
// enum class TransformBox : uint8_t;
// enum class TransformStyle3D : uint8_t;
// enum class UnicodeBidi : uint8_t;
// enum class UsedClear : uint8_t;
// enum class UsedFloat : uint8_t;
// enum class UserDrag : uint8_t;
// enum class UserModify : uint8_t;
// enum class UserSelect : uint8_t;
// enum class VectorEffect : uint8_t;
// enum class Visibility : uint8_t;
// enum class WhiteSpace : uint8_t;
// enum class WhiteSpaceCollapse : uint8_t;
// enum class WindRule : bool;
// enum class WordBreak : uint8_t;

// struct CSSPropertiesBitSet;
// struct CounterDirectiveMap;
// struct GridTrackList;
// struct TransformOperationData;

// template<typename> class RectEdges;
// template<typename> class RectCorners;
// template<typename> struct MinimallySerializingSpaceSeparatedRectEdges;
// template<typename> struct MinimallySerializingSpaceSeparatedSize;

// using IntOutsets = RectEdges<int>;

// namespace Style {
// class CustomProperty;
// class CustomPropertyData;
// class CustomPropertyRegistry;

// struct AccentColor;
// struct AlignContent;
// struct AlignItems;
// struct AlignSelf;
// struct Animation;
// struct AnchorNames;
// struct AppleColorFilter;
// struct AspectRatio;
// struct BackgroundLayer;
// struct BackgroundSize;
// struct BlockEllipsis;
// struct BlockStepSize;
// struct BorderImage;
// struct BorderImageOutset;
// struct BorderImageRepeat;
// struct BorderImageSlice;
// struct BorderImageSource;
// struct BorderImageWidth;
// struct BorderRadius;
// struct BoxShadow;
// struct Clip;
// struct ClipPath;
// struct Color;
// struct ColorScheme;
// struct ColumnCount;
// struct ColumnWidth;
// struct Contain;
// struct ContainIntrinsicSize;
// struct ContainerNames;
// struct Content;
// struct CornerShapeValue;
// struct Cursor;
// struct DynamicRangeLimit;
// struct Filter;
// struct FlexBasis;
// struct FontFamilies;
// struct FontFamiliesView;
// struct FontFeatureSettings;
// struct FontPalette;
// struct FontSizeAdjust;
// struct FontStyle;
// struct FontVariantAlternates;
// struct FontVariantEastAsian;
// struct FontVariantLigatures;
// struct FontVariantNumeric;
// struct FontVariationSettings;
// struct FontWeight;
// struct FontWidth;
// struct GapGutter;
// struct GridPosition;
// struct GridTemplateAreas;
// struct GridTemplateList;
// struct GridTrackSizes;
// struct HangingPunctuation;
// struct HyphenateCharacter;
// struct HyphenateLimitEdge;
// struct HyphenateLimitLines;
// struct ImageOrNone;
// struct InsetEdge;
// struct ItemTolerance;
// struct JustifyContent;
// struct JustifyItems;
// struct JustifySelf;
// struct LetterSpacing;
// struct LineHeight;
// struct LineWidth;
// struct LineFitEdge;
// struct ListStyleType;
// struct MarginEdge;
// struct MarginTrim;
// struct MaskBorder;
// struct MaskBorderOutset;
// struct MaskBorderRepeat;
// struct MaskBorderSlice;
// struct MaskBorderSource;
// struct MaskBorderWidth;
// struct MaskLayer;
// struct MathDepth;
// struct MaximumLines;
// struct MaximumSize;
// struct MinimumSize;
// struct NameScope;
// struct OffsetAnchor;
// struct OffsetDistance;
// struct OffsetPath;
// struct OffsetPosition;
// struct OffsetRotate;
// struct OverflowClipMargin;
// struct Opacity;
// struct Orphans;
// struct PaddingEdge;
// struct PageSize;
// struct Perspective;
// struct Position;
// struct PositionAnchor;
// struct PositionArea;
// struct PositionVisibility;
// struct PositionX;
// struct PositionY;
// struct PositionTryFallbacks;
// struct PreferredSize;
// struct ProgressTimelineAxes;
// struct ProgressTimelineNames;
// struct Quotes;
// struct RepeatStyle;
// struct Rotate;
// struct SVGBaselineShift;
// struct SVGCenterCoordinateComponent;
// struct SVGCoordinateComponent;
// struct SVGMarkerResource;
// struct SVGPaint;
// struct SVGPaintOrder;
// struct SVGPathData;
// struct SVGRadius;
// struct SVGRadiusComponent;
// struct SVGStrokeDasharray;
// struct SVGStrokeDashoffset;
// struct Scale;
// struct ScopedName;
// struct ScrollMarginEdge;
// struct ScrollPaddingEdge;
// struct ScrollSnapAlign;
// struct ScrollSnapType;
// struct ScrollTimelines;
// struct ScrollbarColor;
// struct ScrollbarGutter;
// struct ShapeMargin;
// struct ShapeOutside;
// struct SpeakAs;
// struct StrokeMiterlimit;
// struct StrokeWidth;
// struct TabSize;
// struct TextAutospace;
// struct TextBoxEdge;
// struct TextDecorationLine;
// struct TextDecorationThickness;
// struct TextEmphasisPosition;
// struct TextEmphasisStyle;
// struct TextIndent;
// struct TextShadow;
// struct TextSizeAdjust;
// struct TextSpacingTrim;
// struct TextTransform;
// struct TextUnderlineOffset;
// struct TextUnderlinePosition;
// struct TouchAction;
// struct Transform;
// struct TransformOrigin;
// struct Transition;
// struct Translate;
// struct VerticalAlign;
// struct ViewTimelineInsets;
// struct ViewTimelines;
// struct ViewTransitionClasses;
// struct ViewTransitionName;
// struct WebkitBoxReflect;
// struct WebkitInitialLetter;
// struct WebkitLineBoxContain;
// struct WebkitLineClamp;
// struct WebkitLineGrid;
// struct WebkitLocale;
// struct WebkitMarqueeIncrement;
// struct WebkitMarqueeRepetition;
// struct WebkitMarqueeSpeed;
// struct WebkitTextStrokeWidth;
// struct Widows;
// struct WillChange;
// struct WordSpacing;
// struct ZIndex;
// struct Zoom;
// struct ZoomFactor;

// enum class Change : uint8_t;
// enum class GridTrackSizingDirection : bool;
// enum class ImageOrientation : bool;
// enum class PositionTryOrder : uint8_t;
// enum class Resize : uint8_t;
// enum class SVGGlyphOrientationHorizontal : uint8_t;
// enum class SVGGlyphOrientationVertical : uint8_t;
// enum class ScrollBehavior : bool;
// enum class ScrollbarWidth : uint8_t;
// enum class TextAlignLast : uint8_t;
// enum class TextAlign : uint8_t;
// enum class WebkitOverflowScrolling : bool;
// enum class WebkitTouchCallout : bool;

// template<typename> struct CoordinatedValueList;
// template<typename> struct Shadows;

// using Animations = CoordinatedValueList<Animation>;
// using BackgroundLayers = CoordinatedValueList<BackgroundLayer>;
// using BorderRadiusValue = MinimallySerializingSpaceSeparatedSize<LengthPercentage<CSS::Nonnegative>>;
// using BoxShadows = Shadows<BoxShadow>;
// using FlexGrow = Number<CSS::Nonnegative, float>;
// using FlexShrink = Number<CSS::Nonnegative, float>;
// using InsetBox = MinimallySerializingSpaceSeparatedRectEdges<InsetEdge>;
// using LineWidthBox = MinimallySerializingSpaceSeparatedRectEdges<LineWidth>;
// using MarginBox = MinimallySerializingSpaceSeparatedRectEdges<MarginEdge>;
// using MaskLayers = CoordinatedValueList<MaskLayer>;
// using ObjectPosition = Position;
// using Order = Integer<>;
// using PaddingBox = MinimallySerializingSpaceSeparatedRectEdges<PaddingEdge>;
// using PerspectiveOrigin = Position;
// using PerspectiveOriginX = PositionX;
// using PerspectiveOriginY = PositionY;
// using ScrollMarginBox = MinimallySerializingSpaceSeparatedRectEdges<ScrollMarginEdge>;
// using ScrollPaddingBox = MinimallySerializingSpaceSeparatedRectEdges<ScrollPaddingEdge>;
// using ShapeImageThreshold = Number<CSS::ClosedUnitRangeClampBoth, float>;
// using TextShadows = Shadows<TextShadow>;
// using TransformOriginX = PositionX;
// using TransformOriginXY = Position;
// using TransformOriginY = PositionY;
// using TransformOriginZ = Length<>;
// using Transitions = CoordinatedValueList<Transition>;
// using WebkitBorderSpacing = Length<CSS::NonnegativeUnzoomed>;
// using WebkitBoxFlex = Number<CSS::All, float>;
// using WebkitBoxFlexGroup = Integer<CSS::Nonnegative>;
// using WebkitBoxOrdinalGroup = Integer<CSS::Positive>;
// }

// constexpr auto PublicPseudoIDBits = 18;
// constexpr auto TextDecorationLineBits = 5;
// constexpr auto TextTransformBits = 6;
// constexpr auto PseudoElementTypeBits = 5;

// DECLARE_ALLOCATOR_WITH_HEAP_IDENTIFIER(PseudoStyleCache);
// struct PseudoStyleCache {
//     WTF_DEPRECATED_MAKE_STRUCT_FAST_ALLOCATED_WITH_HEAP_IDENTIFIER(PseudoStyleCache, PseudoStyleCache);
//     HashMap<Style::PseudoElementIdentifier, std::unique_ptr<RenderStyle>> styles;
// };

DECLARE_ALLOCATOR_WITH_HEAP_IDENTIFIER(RenderStyleBase);
class RenderStyleBase {
    WTF_DEPRECATED_MAKE_FAST_ALLOCATED_WITH_HEAP_IDENTIFIER(RenderStyleBase, RenderStyleBase);
    WTF_OVERRIDE_DELETE_FOR_CHECKED_PTR(RenderStyleBase);
public:
    ~RenderStyleBase() = default;

    // Delegation to `Style::ComputedStyle` for `CheckedPtr` support.
    ALWAYS_INLINE uint32_t checkedPtrCount() const { return m_computedStyle.checkedPtrCount(); }
    ALWAYS_INLINE void incrementCheckedPtrCount() const { m_computedStyle.incrementCheckedPtrCount(); }
    ALWAYS_INLINE void decrementCheckedPtrCount() const { m_computedStyle.decrementCheckedPtrCount(); }
    ALWAYS_INLINE uint32_t checkedPtrCountWithoutThreadCheck() const { return m_computedStyle.checkedPtrCountWithoutThreadCheck(); }
    ALWAYS_INLINE void setDidBeginCheckedPtrDeletion() { m_computedStyle.setDidBeginCheckedPtrDeletion(); }

    inline bool usesViewportUnits() const;
    inline void setUsesViewportUnits();

    inline bool usesContainerUnits() const;
    inline void setUsesContainerUnits();

    inline bool useTreeCountingFunctions() const;
    inline void setUsesTreeCountingFunctions();

    inline InsideLink insideLink() const;
    inline void setInsideLink(InsideLink);

    inline bool isLink() const;
    inline void setIsLink(bool);

    inline bool emptyState() const;
    inline void setEmptyState(bool);

    inline bool firstChildState() const;
    inline void setFirstChildState();

    inline bool lastChildState() const;
    inline void setLastChildState();

    inline bool hasExplicitlyInheritedProperties() const;
    inline void setHasExplicitlyInheritedProperties();

    inline bool disallowsFastPathInheritance() const;
    inline void setDisallowsFastPathInheritance();

    inline bool hasDisplayAffectedByAnimations() const;
    inline void setHasDisplayAffectedByAnimations();

    inline bool transformStyleForcedToFlat() const;
    inline void setTransformStyleForcedToFlat(bool);

    inline void setUsesAnchorFunctions();
    inline bool usesAnchorFunctions() const;

    inline void setAnchorFunctionScrollCompensatedAxes(EnumSet<BoxAxis>);
    inline EnumSet<BoxAxis> anchorFunctionScrollCompensatedAxes() const;

    inline void setIsPopoverInvoker();
    inline bool isPopoverInvoker() const;

    inline bool nativeAppearanceDisabled() const;
    inline void setNativeAppearanceDisabled(bool);

    inline bool insideDefaultButton() const;
    inline void setInsideDefaultButton(bool);

    inline bool insideSubmitButton() const;
    inline void setInsideSubmitButton(bool);

    inline OptionSet<EventListenerRegionType> eventListenerRegionTypes() const;
    inline void setEventListenerRegionTypes(OptionSet<EventListenerRegionType>);

    // No setter. Set via `RenderStyleProperties::setBlendMode()`.
    inline bool isInSubtreeWithBlendMode() const;

    inline bool isForceHidden() const;
    inline void setIsForceHidden();

    inline bool autoRevealsWhenFound() const;
    inline void setAutoRevealsWhenFound();

    inline bool hasAttrContent() const;
    inline void setHasAttrContent();

    inline std::optional<size_t> usedPositionOptionIndex() const;
    inline void setUsedPositionOptionIndex(std::optional<size_t>);

    inline bool effectiveInert() const;
    inline void setEffectiveInert(bool);

    inline bool isEffectivelyTransparent() const; // This or any ancestor has opacity 0.
    inline void setIsEffectivelyTransparent(bool);

    // No setter. Set via `RenderStyleProperties::setDisplay()`.
    inline constexpr DisplayType originalDisplay() const;

    // `effectiveDisplay()` getter is an alias of `RenderStyleProperties::display()`.
    inline DisplayType effectiveDisplay() const;
    inline void setEffectiveDisplay(DisplayType);

    inline StyleAppearance usedAppearance() const;
    inline void setUsedAppearance(StyleAppearance);

    // usedContentVisibility will return ContentVisibility::Hidden in a content-visibility: hidden subtree (overriding
    // content-visibility: auto at all times), ContentVisibility::Auto in a content-visibility: auto subtree (when the
    // content is not user relevant and thus skipped), and ContentVisibility::Visible otherwise.
    inline ContentVisibility usedContentVisibility() const;
    inline void setUsedContentVisibility(ContentVisibility);

    // 'touch-action' behavior depends on values in ancestors. We use an additional inherited property to implement that.
    inline Style::TouchAction usedTouchAction() const;
    inline void setUsedTouchAction(Style::TouchAction);

    inline Style::ZIndex usedZIndex() const;
    inline void setUsedZIndex(Style::ZIndex);

#if HAVE(CORE_MATERIAL)
    inline AppleVisualEffect usedAppleVisualEffectForSubtree() const;
    inline void setUsedAppleVisualEffectForSubtree(AppleVisualEffect);
#endif

#if ENABLE(TEXT_AUTOSIZING)
    // MARK: - Text Autosizing

    inline AutosizeStatus autosizeStatus() const;
    inline void setAutosizeStatus(AutosizeStatus);
#endif

    // MARK: - Pseudo element/style

    std::optional<PseudoElementType> pseudoElementType() const;
    const AtomString& pseudoElementNameArgument() const;

    std::optional<Style::PseudoElementIdentifier> pseudoElementIdentifier() const;
    inline void setPseudoElementIdentifier(std::optional<Style::PseudoElementIdentifier>&&);

    inline bool hasAnyPublicPseudoStyles() const;
    inline bool hasPseudoStyle(PseudoElementType) const;
    inline void setHasPseudoStyles(EnumSet<PseudoElementType>);

    RenderStyle* getCachedPseudoStyle(const Style::PseudoElementIdentifier&) const;
    RenderStyle* addCachedPseudoStyle(std::unique_ptr<RenderStyle>);

    bool hasCachedPseudoStyles() const { return m_computedStyle.hasCachedPseudoStyles(); }
    const Style::PseudoStyleCache& cachedPseudoStyles() const { return m_computedStyle.cachedPseudoStyles(); }

    // MARK: - Custom properties

    inline const Style::CustomPropertyData& inheritedCustomProperties() const;
    inline const Style::CustomPropertyData& nonInheritedCustomProperties() const;
    const Style::CustomProperty* customPropertyValue(const AtomString&) const;
    void setCustomPropertyValue(Ref<const Style::CustomProperty>&&, bool isInherited);
    bool customPropertyValueEqual(const RenderStyleBase&, const AtomString&) const;
    bool customPropertiesEqual(const RenderStyleBase&) const;
    void deduplicateCustomProperties(const RenderStyleBase&);

    // MARK: - Custom paint

    void addCustomPaintWatchProperty(const AtomString&);

    // MARK: - Zoom

    inline bool evaluationTimeZoomEnabled() const;
    inline void setEvaluationTimeZoomEnabled(bool);

    inline float deviceScaleFactor() const;
    inline void setDeviceScaleFactor(float);

    inline bool useSVGZoomRulesForLength() const;
    inline void setUseSVGZoomRulesForLength(bool);

    inline float usedZoom() const;
    inline bool setUsedZoom(float);

    inline Style::ZoomFactor usedZoomForLength() const;

    // MARK: - Fonts

    inline const FontCascade& fontCascade() const;
    inline CheckedRef<const FontCascade> checkedFontCascade() const;
    inline FontCascade& mutableFontCascadeWithoutUpdate();
    inline void setFontCascade(FontCascade&&);

    inline const FontCascadeDescription& fontDescription() const;
    inline FontCascadeDescription& mutableFontDescriptionWithoutUpdate();
    inline void setFontDescription(FontCascadeDescription&&);
    inline bool setFontDescriptionWithoutUpdate(FontCascadeDescription&&);

    inline const FontMetrics& metricsOfPrimaryFont() const;
    inline std::pair<FontOrientation, NonCJKGlyphOrientation> fontAndGlyphOrientation();
    inline float computedFontSize() const;
    inline Style::WebkitLocale computedLocale() const;
    inline const Style::LineHeight& specifiedLineHeight() const;
#if ENABLE(TEXT_AUTOSIZING)
    inline void setSpecifiedLineHeight(Style::LineHeight&&);
#endif

    inline void setLetterSpacingFromAnimation(Style::LetterSpacing&&);
    inline void setWordSpacingFromAnimation(Style::WordSpacing&&);

    inline void synchronizeLetterSpacingWithFontCascade();
    inline void synchronizeLetterSpacingWithFontCascadeWithoutUpdate();
    inline void synchronizeWordSpacingWithFontCascade();
    inline void synchronizeWordSpacingWithFontCascadeWithoutUpdate();

    inline float usedLetterSpacing() const;
    inline float usedWordSpacing() const;

    // MARK: - Used Counter Directives

    inline const CounterDirectiveMap& usedCounterDirectives() const;

    // MARK: - Writing Modes

    // FIXME: Rename to something that doesn't conflict with a property name.
    // Aggregates `writing-mode`, `direction` and `text-orientation`.
    WritingMode writingMode() const { return m_computedStyle.writingMode(); }

    // FIXME: *Deprecated* Deprecated due to confusion between physical inline directions and bidi / line-relative directions.
    bool isLeftToRightDirection() const { return writingMode().isBidiLTR(); }

    // MARK: - Aggregates

    inline Style::Animations& ensureAnimations();
    inline Style::BackgroundLayers& ensureBackgroundLayers();
    inline Style::MaskLayers& ensureMaskLayers();
    inline Style::Transitions& ensureTransitions();

    inline const BorderData& border() const;
    inline const BorderValue& borderBottom() const;
    inline const BorderValue& borderLeft() const;
    inline const BorderValue& borderRight() const;
    inline const BorderValue& borderTop() const;
    inline const Style::Animations& animations() const;
    inline const Style::BackgroundLayers& backgroundLayers() const;
    inline const Style::BorderImage& borderImage() const;
    inline const Style::BorderRadius& borderRadii() const;
    inline const Style::InsetBox& insetBox() const;
    inline const Style::MarginBox& marginBox() const;
    inline const Style::MaskBorder& maskBorder() const;
    inline const Style::MaskLayers& maskLayers() const;
    inline const Style::PaddingBox& paddingBox() const;
    inline const Style::PerspectiveOrigin& perspectiveOrigin() const;
    inline const Style::ScrollMarginBox& scrollMarginBox() const;
    inline const Style::ScrollPaddingBox& scrollPaddingBox() const;
    inline const Style::ScrollTimelines& scrollTimelines() const;
    inline const Style::TransformOrigin& transformOrigin() const;
    inline const Style::Transitions& transitions() const;
    inline const Style::ViewTimelines& viewTimelines() const;

    inline void setBackgroundLayers(Style::BackgroundLayers&&);
    inline void setBorderImage(Style::BorderImage&&);
    inline void setBorderRadius(Style::BorderRadiusValue&&);
    inline void setBorderTop(BorderValue&&);
    inline void setBorderRight(BorderValue&&);
    inline void setBorderBottom(BorderValue&&);
    inline void setBorderLeft(BorderValue&&);
    inline void setInsetBox(Style::InsetBox&&);
    inline void setMarginBox(Style::MarginBox&&);
    inline void setMaskBorder(Style::MaskBorder&&);
    inline void setMaskLayers(Style::MaskLayers&&);
    inline void setPaddingBox(Style::PaddingBox&&);
    inline void setPerspectiveOrigin(Style::PerspectiveOrigin&&);
    inline void setTransformOrigin(Style::TransformOrigin&&);

    // MARK: - Properties/descriptors that are not yet generated

    // `cursor`
    inline CursorType cursorType() const;

    // `@page size`
    inline const Style::PageSize& pageSize() const;
    inline void setPageSize(Style::PageSize&&);

    // MARK: - Underlying ComputedStyle

    Style::ComputedStyle& computedStyle() { return m_computedStyle; }
    const Style::ComputedStyle& computedStyle() const { return m_computedStyle; }

protected:
    friend class RenderStyle;
    friend class Style::DifferenceFunctions;

    const Style::NonInheritedData& nonInheritedData() const { return computedStyle().nonInheritedData(); }
    const Style::ComputedStyle::NonInheritedFlags& nonInheritedFlags() const { return computedStyle().nonInheritedFlags(); }

    const Style::InheritedRareData& inheritedRareData() const { return computedStyle().inheritedRareData(); }
    const Style::InheritedData& inheritedData() const { return computedStyle().inheritedData(); }
    const Style::ComputedStyle::InheritedFlags& inheritedFlags() const { return computedStyle().inheritedFlags(); }

    const Style::SVGData& svgData() const { return computedStyle().svgData(); }

    enum CloneTag { Clone };
    enum CreateDefaultStyleTag { CreateDefaultStyle };

    RenderStyleBase(RenderStyleBase&&);
    RenderStyleBase& operator=(RenderStyleBase&&);

    RenderStyleBase(CreateDefaultStyleTag);
    RenderStyleBase(const RenderStyleBase&, CloneTag);

    RenderStyleBase(RenderStyleBase&, RenderStyleBase&&);

    Style::ComputedStyle m_computedStyle;
};

} // namespace WebCore
