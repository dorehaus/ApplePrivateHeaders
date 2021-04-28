/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/Versions/A/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <PhotoFoundation/PFInitializationWorkItem.h>

@class NSArray;

@interface PFInitializationClassWorkItem : PFInitializationWorkItem {

	Class _initializationClass;
	NSArray* _configurationClasses;
	opaque_pthread_t* _assignSingletonThread;
	id _singleton;

}

@property (readonly) Class initializationClass;                          //@synthesize initializationClass=_initializationClass - In the implementation block
@property (readonly) NSArray * configurationClasses;                     //@synthesize configurationClasses=_configurationClasses - In the implementation block
@property (assign) opaque_pthread_t* assignSingletonThread;              //@synthesize assignSingletonThread=_assignSingletonThread - In the implementation block
@property (retain) id singleton;                                         //@synthesize singleton=_singleton - In the implementation block
-(id)description;
-(id)singleton;
-(void)performInitialization;
-(id)initWithClass:(Class)arg1 mainThread:(char)arg2 ;
-(void)addConfigurationClass:(Class)arg1 ;
-(Class)initializationClass;
-(NSArray *)configurationClasses;
-(opaque_pthread_t*)assignSingletonThread;
-(void)setAssignSingletonThread:(opaque_pthread_t*)arg1 ;
-(void)setSingleton:(id)arg1 ;
@end

