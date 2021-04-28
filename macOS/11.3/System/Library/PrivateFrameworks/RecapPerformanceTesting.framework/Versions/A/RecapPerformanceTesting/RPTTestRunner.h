/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RecapPerformanceTesting.framework/Versions/A/RecapPerformanceTesting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RPTInteractionOptions, RPTSettings;

@interface RPTTestRunner : NSObject {

	RPTInteractionOptions* _interactionOptions;
	RPTSettings* _settings;

}

@property (assign,nonatomic) RPTSettings * settings;                                  //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) RPTInteractionOptions * interactionOptions;              //@synthesize interactionOptions=_interactionOptions - In the implementation block
+(void)runTestWithParameters:(id)arg1 ;
+(char)isRecapAvailable;
+(void)playInteraction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(RPTSettings *)settings;
-(void)setSettings:(RPTSettings *)arg1 ;
-(RPTInteractionOptions *)interactionOptions;
-(id)initWithInteractionOptions:(id)arg1 ;
-(void)runTestWithParameters:(id)arg1 ;
-(char)_manageTestStartAndEndForParameters:(id)arg1 ;
-(void)playInteraction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setInteractionOptions:(RPTInteractionOptions *)arg1 ;
@end

