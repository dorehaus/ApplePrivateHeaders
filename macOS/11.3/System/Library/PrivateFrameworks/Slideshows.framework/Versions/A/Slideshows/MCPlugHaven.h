/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/MCPlug.h>

@class NSString, MCContainerNavigator, MCAction;

@interface MCPlugHaven : MCPlug {

	NSString* mIDInSupercontainer;
	MCContainerNavigator* mSupercontainer;

}

@property (setter=setIDInSupercontainer:,getter=idInSupercontainer,copy) NSString * idInSupercontainer; 
@property (assign) MCContainerNavigator * supercontainer; 
@property (nonatomic,retain) MCAction * actionOnCompletion; 
-(id)xmlElement;
-(id)imprint;
-(NSString *)idInSupercontainer;
-(void)demolish;
-(MCContainerNavigator *)supercontainer;
-(void)setIDInSupercontainer:(id)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)setSupercontainer:(MCContainerNavigator *)arg1 ;
-(MCAction *)actionOnCompletion;
-(void)setActionOnCompletion:(MCAction *)arg1 ;
@end

