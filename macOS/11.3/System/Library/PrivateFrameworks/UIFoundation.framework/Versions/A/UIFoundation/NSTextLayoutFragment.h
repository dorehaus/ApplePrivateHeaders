/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCoreTypesetterDelegateInternal.h>
#import <libobjc.A.dylib/__NSTextRunStorageDataSource.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSTextViewportElement.h>

@class NSTextRange, NSTextLayoutManager, NSTextElement, _NSTextAttributeStorage, NSMapTable, NSLayoutManager, NSTextStorage, NSArray, NSOperationQueue, NSTextParagraph, NSString;

@interface NSTextLayoutFragment : NSObject <NSCoreTypesetterDelegateInternal, __NSTextRunStorageDataSource, NSSecureCoding, NSTextViewportElement> {

	NSTextLayoutManager* _textLayoutManager;
	NSTextElement* _textElement;
	NSTextRange* _rangeInElement;
	_NSTextAttributeStorage* _renderingAttributesTable;
	CGRect _layoutFragmentFrame;
	CGPoint _layoutPoint;
	NSMapTable* _textAttachmentContextTable;
	char _isTextParagraph;
	NSRange _characterRange;
	unsigned long long _sourceVerticalDelta;
	unsigned long long _sourceRangeDelta;
	CGRect _sourceBoundingRect;
	CGRect _destinationBoundingRect;
	unsigned long long _animationType;
	NSLayoutManager* _destinationLayoutManager;
	NSTextStorage* _destinationTextStorage;
	double _destinationVerticalDelta;
	NSRange _destinationGlyphRange;
	NSLayoutManager* _layoutManager;
	char _renderingAttributesValidated;
	char _rendersTextCorrectionMarkers;
	NSArray* _textLineFragments;
	NSOperationQueue* _layoutQueue;
	unsigned long long _state;

}

@property (__weak,readonly) NSLayoutManager * layoutManager; 
@property (readonly) NSRange characterRange; 
@property (readonly) CGRect sourceBoundingRect; 
@property (readonly) CGRect destinationBoundingRect; 
@property (readonly) unsigned long long animationType; 
@property (copy) NSArray * textLineFragments;                                                       //@synthesize textLineFragments=_textLineFragments - In the implementation block
@property (assign) unsigned long long state;                                                        //@synthesize state=_state - In the implementation block
@property (assign) CGRect layoutFragmentFrame; 
@property (getter=_isRenderingAttributesValidated) char _renderingAttributesValidated;              //@synthesize renderingAttributesValidated=_renderingAttributesValidated - In the implementation block
@property (assign) char rendersTextCorrectionMarkers;                                               //@synthesize rendersTextCorrectionMarkers=_rendersTextCorrectionMarkers - In the implementation block
@property (readonly) NSTextParagraph * textParagraph; 
@property (readonly) NSTextLayoutManager * textLayoutManager; 
@property (readonly) NSTextElement * textElement; 
@property (readonly) NSTextRange * rangeInElement; 
@property (retain) NSOperationQueue * layoutQueue;                                                  //@synthesize layoutQueue=_layoutQueue - In the implementation block
@property (readonly) CGRect renderingSurfaceBounds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isCountableDataSource,readonly) char countableDataSource; 
@property (readonly) id<NSTextLocation> baseLocation; 
@property (readonly) NSTextRange * representedRange; 
@property (readonly) CGSize layoutSize; 
@property (assign) CGPoint layoutPoint; 
+(char)supportsSecureCoding;
+(id)_validCoreTextRenderingAttributes;
+(id)layoutFragmentQueue;
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)_layout;
-(void)layout;
-(NSLayoutManager *)layoutManager;
-(void)invalidateLayout;
-(NSTextLayoutManager *)textLayoutManager;
-(void)_setup;
-(NSRange)characterRange;
-(long long)offsetFromLocation:(id)arg1 toLocation:(id)arg2 ;
-(id)locationFromLocation:(id)arg1 offset:(long long)arg2 ;
-(NSTextRange *)rangeInElement;
-(NSArray *)textLineFragments;
-(CGRect)layoutFragmentFrame;
-(NSTextElement *)textElement;
-(NSTextRange *)representedRange;
-(CGRect)renderingSurfaceBounds;
-(CGPoint)layoutPoint;
-(CGSize)layoutSize;
-(void)drawAtPoint:(CGPoint)arg1 context:(CGContextRef)arg2 ;
-(void)enumerateRenderingAttributesFromLocation:(id)arg1 reverse:(char)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setRenderingAttributes:(id)arg1 forTextRange:(id)arg2 ;
-(void)addRenderingAttribute:(id)arg1 value:(id)arg2 forTextRange:(id)arg3 ;
-(void)removeRenderingAttribute:(id)arg1 forTextRange:(id)arg2 ;
-(void)setTextElement:(NSTextElement *)arg1 ;
-(void)setLayoutQueue:(NSOperationQueue *)arg1 ;
-(void)setLayoutFragmentFrameOrigin:(CGPoint)arg1 ;
-(id)initWithTextElement:(id)arg1 range:(id)arg2 ;
-(void)setTextLayoutManager:(NSTextLayoutManager *)arg1 ;
-(void)estimateSize;
-(char)_isRenderingAttributesValidated;
-(void)set_renderingAttributesValidated:(char)arg1 ;
-(NSTextParagraph *)textParagraph;
-(CGPoint)layoutFragmentFrameOrigin;
-(void)layoutManagerDidSetTemporaryAttributes:(id)arg1 forTextRange:(id)arg2 ;
-(char)isCountableDataSource;
-(void)invalidateRenderingAttributesForTextRange:(id)arg1 ;
-(id<NSTextLocation>)baseLocation;
-(NSOperationQueue *)layoutQueue;
-(void)setRendersTextCorrectionMarkers:(char)arg1 ;
-(id)_resolvedRenderingAttributesForCharacterIndex:(long long)arg1 effectiveRange:(out NSRange*)arg2 ;
-(char)rendersTextCorrectionMarkers;
-(void)setLayoutFragmentFrame:(CGRect)arg1 ;
-(id)_layoutContextForTextAttachmentAtLocation:(id)arg1 ;
-(void)setTextLineFragments:(NSArray *)arg1 ;
-(CGRect)sourceBoundingRect;
-(CGRect)destinationBoundingRect;
-(unsigned long long)animationType;
-(id)_textAttributesAffectingLayout;
-(void)setRenderingAttribute:(id)arg1 value:(id)arg2 forTextRange:(id)arg3 ;
-(id)representedRangeAtPoint:(CGPoint)arg1 ;
-(double)verticalOffsetOfTextLocation:(id)arg1 withAffinity:(long long)arg2 ;
-(void)setLayoutPoint:(CGPoint)arg1 ;
-(id)_coreTextAttributes;
-(id)destinationLayoutManager;
-(NSRange)destinationGlyphRange;
-(double)destinationVerticalDelta;
-(id)initWithLayoutManager:(id)arg1 characterRange:(NSRange)arg2 animationType:(unsigned long long)arg3 boundingRect:(CGRect)arg4 ;
-(void)setDestinationLayoutManager:(id)arg1 ;
-(id)destinationTextStorage;
-(void)setDestinationTextStorage:(id)arg1 ;
-(void)setDestinationVerticalDelta:(double)arg1 ;
-(void)setDestinationGlyphRange:(NSRange)arg1 ;
-(void)setDestinationBoundingRect:(CGRect)arg1 ;
-(void)drawAtPoint:(CGPoint)arg1 contentType:(unsigned long long)arg2 ;
@end

