/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISEffect.h>

@class NSString;

@interface ISBlurEffect : NSObject <ISEffect> {

	double _radius;

}

@property (assign) double radius;                                   //@synthesize radius=_radius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)filterWithBackgroundImage:(id)arg1 inputImage:(id)arg2 ;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(id)initWithRadius:(double)arg1 ;
@end

