/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSFont, NSDictionary, NSColor;


@protocol SOTranscriptTheme <NSObject>
@property (nonatomic,readonly) NSFont * balloonTextFont; 
@property (nonatomic,readonly) NSDictionary * defaultStatusItemStringAttributes; 
@property (nonatomic,readonly) NSDictionary * effectControlItemStringAttributes; 
@property (nonatomic,readonly) NSColor * defaultCollectionViewItemBackgroundColor; 
@property (nonatomic,readonly) CGSize defaultCollectionViewItemSize; 
@required
-(NSFont *)balloonTextFont;
-(NSColor *)defaultCollectionViewItemBackgroundColor;
-(CGSize)defaultCollectionViewItemSize;
-(id)gradientBalloonColorsForBalloonDescriptor:(IMBalloonDescriptor_t)arg1;
-(id)balloonColorForBalloonDescriptor:(IMBalloonDescriptor_t)arg1;
-(id)balloonMaskImageForBalloonDescriptor:(IMBalloonDescriptor_t)arg1 userInterfaceLayoutDirection:(long long)arg2 outCenterRect:(CGRect*)arg3;
-(NSEdgeInsets*)insetsForBalloonWithBalloonDescriptor:(IMBalloonDescriptor_t)arg1;
-(id)balloonTextFontWeightAttributes;
-(id)balloonTextColorForBalloonDescriptor:(IMBalloonDescriptor_t)arg1;
-(NSEdgeInsets*)insetsForTextBalloonWithBalloonDescriptor:(IMBalloonDescriptor_t)arg1;
-(id)stringForMessageStatusType:(long long)arg1 statusDate:(id)arg2 attributionType:(long long)arg3;
-(NSDictionary *)defaultStatusItemStringAttributes;
-(NSDictionary *)effectControlItemStringAttributes;

@end
