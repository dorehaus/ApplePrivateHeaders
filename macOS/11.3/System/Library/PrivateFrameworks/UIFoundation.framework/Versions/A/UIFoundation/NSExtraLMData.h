/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSRunStorage, NSLock, NSTextContainer, NSMutableArray, NSLayoutManagerTextBlockRowArrayCache, NSParagraphArbitrator, CUIStyleEffectConfiguration, NSMutableSet;

@interface NSExtraLMData : NSObject {

	NSRunStorage* _attachmentSizesRun;
	CGRect _currentAttachmentRect;
	unsigned long long _currentAttachmentIndex;
	NSLock* _fillHoleLock;
	NSRunStorage* _fragmentRunsExtras;
	id _temporaryAttributes;
	NSTextContainer* _firstTextContainer;
	CFDictionaryRef _textContainerIndexes;
	CFDictionaryRef _textContainerGlyphIndexes;
	long long _typesetterBehavior;
	CGRect _cachedFontBounds;
	double _cachedUnderlineThickness;
	double _cachedUnderlinePosition;
	double _cachedUnderlineAdjustment;
	NSRange _cachedUnderlineRange;
	NSMutableArray* _blockRunsArray;
	double _hyphenationFactor;
	NSMutableArray* _insertionPointCache;
	NSGlyphTree* _glyphTree;
	NSLayoutTree* _layoutTree;
	NSRange _firstTextViewVisibleCharRange;
	CGSize _firstTextViewVisibleOffset;
	NSRange _lastInvalidatedCharRange;
	double _lastInvalidatedLongitudinalPosition;
	NSTextContainer* _lastInvalidatedTextContainer;
	NSLayoutManagerTextBlockRowArrayCache* _rowArrayCache;
	NSParagraphArbitrator* _paragraphArbitrator;
	CUIStyleEffectConfiguration* _styleEffectConfig;
	NSMutableSet* _viewProviders;
	struct {
		unsigned glyphCause : 6;
		unsigned layoutCause : 6;
		unsigned delegateRespondsToTempAttrs : 1;
		unsigned processingFirstTextViewVisible : 1;
		unsigned temporarySpacingChange : 1;
		unsigned alwaysDrawsActive : 1;
		unsigned usesOldShowPackedGlyphs : 1;
		unsigned drawsUnderlinesLikeWebKit : 1;
		unsigned drawsDebugBaselines : 1;
		unsigned mirrorsTextAlignment : 1;
		unsigned forcesTrackingFloor : 1;
		unsigned isLiveScrolling : 1;
		unsigned hasCustomUnderlineColor : 1;
		unsigned applicationPlatformContext : 3;
		unsigned limitsLayoutForSuspiciousContents : 1;
		unsigned delegateRespondsToRenderingColor : 1;
		unsigned firstTextViewRespondsToRenderingColor : 1;
		unsigned usesCustomBackgroundRectArray : 1;
		unsigned usesDefaultHyphenation : 1;
		unsigned reserved : 1;
	}  _lmFlags2;
	NSGlyphIndexForPointCache* _glyphIndexForPointCache;
	long long _currentChangeInLength;
	double _timeStampForResizeInScroll;
	/*^block*/id _didCompleteLayoutObserverBlock;

}
@end

