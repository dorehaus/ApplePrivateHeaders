/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSText-Structs.h>
#import <TSText/TSWPAttachment.h>

@class TSDDrawableInfo;

@interface TSWPDrawableAttachment : TSWPAttachment {

	TSDDrawableInfo* _drawableInfo;
	int _hOffsetType;
	double _hOffset;
	int _vOffsetType;
	double _vOffset;

}

@property (nonatomic,readonly) TSDDrawableInfo * drawable;              //@synthesize drawableInfo=_drawableInfo - In the implementation block
@property (assign,nonatomic) int hOffsetType;                           //@synthesize hOffsetType=_hOffsetType - In the implementation block
@property (assign,nonatomic) double hOffset;                            //@synthesize hOffset=_hOffset - In the implementation block
@property (assign,nonatomic) int vOffsetType;                           //@synthesize vOffsetType=_vOffsetType - In the implementation block
@property (assign,nonatomic) double vOffset;                            //@synthesize vOffset=_vOffset - In the implementation block
+(void)setPositionerClass:(Class)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)invalidate;
-(char)isDrawable;
-(char)isHorizontallyCentered;
-(char)isVerticallyCentered;
-(unsigned)elementKind;
-(char)isSearchable;
-(TSDDrawableInfo *)drawable;
-(id)copyWithContext:(id)arg1 ;
-(char)isAnchored;
-(id)childEnumerator;
-(id)initWithContext:(id)arg1 drawable:(id)arg2 ;
-(void)setHOffset:(double)arg1 ;
-(void)setVOffset:(double)arg1 ;
-(char)isHTMLWrap;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(char)specifiesEnabledKnobMask;
-(void)setParentStorage:(id)arg1 ;
-(void)setHOffsetType:(int)arg1 ;
-(void)setVOffsetType:(int)arg1 ;
-(id)detachDrawable;
-(void)attachDrawable:(id)arg1 ;
-(char)isPartitioned;
-(Class)positionerClass;
-(void)infoChanged;
-(int)hOffsetType;
-(double)hOffset;
-(int)vOffsetType;
-(double)vOffset;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)didFinalizeUnarchivingFromWPStorage:(id)arg1 ;
-(char)shouldInvalidateWhenTextPropertiesChange;
-(char)needsUpdateForStyleChangeToStorage:(id)arg1 charIndex:(unsigned long long)arg2 ;
-(void)updateForStyleChangeToStorage:(id)arg1 charIndex:(unsigned long long)arg2 ;
-(id)objectsForStyleMigrating;
-(char)supportsUUID;
-(char)preserveAttributesOverSelectionWhenInserting;
-(void)loadMessage:(const DrawableAttachmentArchive*)arg1 fromUnarchiver:(id)arg2 ;
-(void)saveMessage:(DrawableAttachmentArchive*)arg1 toArchiver:(id)arg2 ;
-(void)clearParentStorageForDealloc;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 storage:(id)arg2 ;
@end
