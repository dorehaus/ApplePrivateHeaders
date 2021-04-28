/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class CALayer;

@interface MKCalloutLayer : CALayer {

	long long _anchorPosition;
	long long _contentMode;
	CALayer* _layerA;
	CALayer* _layerB;

}

@property (nonatomic,retain) CALayer * layerA;                      //@synthesize layerA=_layerA - In the implementation block
@property (nonatomic,retain) CALayer * layerB;                      //@synthesize layerB=_layerB - In the implementation block
@property (assign,nonatomic) long long anchorPosition;              //@synthesize anchorPosition=_anchorPosition - In the implementation block
@property (nonatomic,readonly) long long contentMode;               //@synthesize contentMode=_contentMode - In the implementation block
+(id)layerWithContentMode:(long long)arg1 ;
-(id)description;
-(id)init;
-(void)layoutSublayers;
-(long long)anchorPosition;
-(void)updateSublayerContent:(char)arg1 ;
-(void)setAnchorPosition:(long long)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(long long)contentMode;
-(id)imageNameWithPartFragment:(id)arg1 ;
-(CALayer *)layerA;
-(CALayer *)layerB;
-(void)setLayerA:(CALayer *)arg1 ;
-(void)setLayerB:(CALayer *)arg1 ;
@end

