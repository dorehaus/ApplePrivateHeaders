/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/Versions/A/IMSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUI/IMSharedUI-Structs.h>
#import <IMSharedUI/IMChatTranscriptItemLayoutAttributes.h>

@interface IMChatTranscriptItemExtendedLayoutAttributes : IMChatTranscriptItemLayoutAttributes {

	long long _layoutOrientation;
	double _topMargin;
	CGSize _drawableSize;

}

@property (assign,nonatomic) long long layoutOrientation;              //@synthesize layoutOrientation=_layoutOrientation - In the implementation block
@property (assign,nonatomic) CGSize drawableSize;                      //@synthesize drawableSize=_drawableSize - In the implementation block
@property (assign,nonatomic) double topMargin;                         //@synthesize topMargin=_topMargin - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)topMargin;
-(void)setTopMargin:(double)arg1 ;
-(long long)layoutOrientation;
-(void)setLayoutOrientation:(long long)arg1 ;
-(CGSize)drawableSize;
-(void)setDrawableSize:(CGSize)arg1 ;
@end
