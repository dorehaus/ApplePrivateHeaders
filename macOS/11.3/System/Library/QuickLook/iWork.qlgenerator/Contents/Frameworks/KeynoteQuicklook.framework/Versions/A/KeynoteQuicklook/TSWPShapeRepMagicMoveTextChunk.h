/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/KeynoteQuicklook.framework/Versions/A/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
@class TSWPShapeRep, NSString, NSMutableIndexSet;

@interface TSWPShapeRepMagicMoveTextChunk : NSObject {

	char _hasListLabel;
	char _isVisible;
	char _shouldTreatAsSingleCharacter;
	char _hasBackgroundShape;
	TSWPShapeRep* _rep;
	NSString* _stringValue;
	NSMutableIndexSet* _unhandledIndexSet;
	long long _stageIndex;
	double _opacityFromRenderer;
	NSRange _range;

}

@property (assign,nonatomic) TSWPShapeRep * rep;                                 //@synthesize rep=_rep - In the implementation block
@property (assign,nonatomic) NSRange range;                                      //@synthesize range=_range - In the implementation block
@property (nonatomic,copy) NSString * stringValue;                               //@synthesize stringValue=_stringValue - In the implementation block
@property (assign,nonatomic) char hasListLabel;                                  //@synthesize hasListLabel=_hasListLabel - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * unhandledIndexSet;              //@synthesize unhandledIndexSet=_unhandledIndexSet - In the implementation block
@property (assign,nonatomic) long long stageIndex;                               //@synthesize stageIndex=_stageIndex - In the implementation block
@property (assign,nonatomic) char isVisible;                                     //@synthesize isVisible=_isVisible - In the implementation block
@property (assign,nonatomic) double opacityFromRenderer;                         //@synthesize opacityFromRenderer=_opacityFromRenderer - In the implementation block
@property (assign,nonatomic) char shouldTreatAsSingleCharacter;                  //@synthesize shouldTreatAsSingleCharacter=_shouldTreatAsSingleCharacter - In the implementation block
@property (assign,nonatomic) char hasBackgroundShape;                            //@synthesize hasBackgroundShape=_hasBackgroundShape - In the implementation block
-(void)dealloc;
-(id)description;
-(id)init;
-(NSString *)stringValue;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(char)isVisible;
-(void)setIsVisible:(char)arg1 ;
-(TSWPShapeRep *)rep;
-(void)setRep:(TSWPShapeRep *)arg1 ;
-(long long)stageIndex;
-(char)hasListLabel;
-(void)setHasListLabel:(char)arg1 ;
-(NSMutableIndexSet *)unhandledIndexSet;
-(void)setUnhandledIndexSet:(NSMutableIndexSet *)arg1 ;
-(void)setStageIndex:(long long)arg1 ;
-(double)opacityFromRenderer;
-(void)setOpacityFromRenderer:(double)arg1 ;
-(char)shouldTreatAsSingleCharacter;
-(void)setShouldTreatAsSingleCharacter:(char)arg1 ;
-(char)hasBackgroundShape;
-(void)setHasBackgroundShape:(char)arg1 ;
@end
