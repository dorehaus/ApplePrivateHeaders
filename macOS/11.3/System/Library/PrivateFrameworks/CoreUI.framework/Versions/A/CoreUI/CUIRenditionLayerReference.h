/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/Versions/A/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSString, CUIRenditionKey;

@interface CUIRenditionLayerReference : NSObject {

	CGRect _frame;
	NSString* _layerName;
	double _opacity;
	int _blendMode;
	char _fixedFrame;
	char _makeOpaqueIfPossible;
	CUIRenditionKey* _referenceKey;

}

@property (assign,nonatomic) CGRect frame;                                //@synthesize frame=_frame - In the implementation block
@property (nonatomic,copy) NSString * layerName;                          //@synthesize layerName=_layerName - In the implementation block
@property (assign,nonatomic) double opacity;                              //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) int blendMode;                               //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) char fixedFrame;                             //@synthesize fixedFrame=_fixedFrame - In the implementation block
@property (assign,nonatomic) char makeOpaqueIfPossible;                   //@synthesize makeOpaqueIfPossible=_makeOpaqueIfPossible - In the implementation block
@property (nonatomic,retain) CUIRenditionKey * referenceKey;              //@synthesize referenceKey=_referenceKey - In the implementation block
-(void)dealloc;
-(id)init;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(double)opacity;
-(NSString *)layerName;
-(void)setLayerName:(NSString *)arg1 ;
-(void)setReferenceKey:(CUIRenditionKey *)arg1 ;
-(char)makeOpaqueIfPossible;
-(void)setMakeOpaqueIfPossible:(char)arg1 ;
-(CUIRenditionKey *)referenceKey;
-(char)fixedFrame;
-(void)setFixedFrame:(char)arg1 ;
@end
