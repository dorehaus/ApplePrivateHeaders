/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/Versions/A/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface durationModelOutput : NSObject <MLFeatureProvider> {

	double _duration_pred;

}

@property (assign,nonatomic) double duration_pred;                //@synthesize duration_pred=_duration_pred - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithDuration_pred:(double)arg1 ;
-(double)duration_pred;
-(void)setDuration_pred:(double)arg1 ;
@end

