/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/Versions/A/PowerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDictionary, NSSet;

@interface gbtClassifierOutput : NSObject <MLFeatureProvider> {

	long long _wait_to_charge;
	NSDictionary* _classProbability;

}

@property (assign,nonatomic) long long wait_to_charge;                     //@synthesize wait_to_charge=_wait_to_charge - In the implementation block
@property (nonatomic,retain) NSDictionary * classProbability;              //@synthesize classProbability=_classProbability - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(NSDictionary *)classProbability;
-(void)setClassProbability:(NSDictionary *)arg1 ;
-(id)initWithWait_to_charge:(long long)arg1 classProbability:(id)arg2 ;
-(long long)wait_to_charge;
-(void)setWait_to_charge:(long long)arg1 ;
@end

