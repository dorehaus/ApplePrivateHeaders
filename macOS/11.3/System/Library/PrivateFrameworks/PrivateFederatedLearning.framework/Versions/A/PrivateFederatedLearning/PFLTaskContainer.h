/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/Versions/A/PrivateFederatedLearning
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PFLTaskStateProvider.h>

@protocol PFLTaskDelegate, MLBatchProvider, PFLDataSource, OS_dispatch_queue, PFLTaskState;
@class NSString, PFLTaskConfiguration, PFLNetworkResourceManager, NSObject;

@interface PFLTaskContainer : NSObject <NSSecureCoding, PFLTaskStateProvider> {

	NSString* _identifier;
	PFLTaskConfiguration* _configuration;
	id<PFLTaskDelegate> _delegate;
	id<MLBatchProvider> _dataProvider;
	PFLNetworkResourceManager* _resourceManager;
	id<PFLDataSource> _metricsProvider;
	NSObject*<OS_dispatch_queue> _queue;
	id<PFLTaskState> _state;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) id<PFLTaskState> state;                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) PFLTaskConfiguration * configuration;                   //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<PFLTaskDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<MLBatchProvider> dataProvider;                         //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,retain) PFLNetworkResourceManager * resourceManager;              //@synthesize resourceManager=_resourceManager - In the implementation block
@property (nonatomic,retain) id<PFLDataSource> metricsProvider;                        //@synthesize metricsProvider=_metricsProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)descriptionFromState:(unsigned long long)arg1 ;
+(id)loadFromSavedStateURL:(id)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<PFLTaskDelegate>)delegate;
-(void)setDelegate:(id<PFLTaskDelegate>)arg1 ;
-(void)resume;
-(id<PFLTaskState>)state;
-(NSString *)identifier;
-(void)setState:(id<PFLTaskState>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)suspend;
-(PFLTaskConfiguration *)configuration;
-(id)modelIdentifier;
-(id)taskIdentifier;
-(id)modelConfiguration;
-(int)modelVersion;
-(id)layerNames;
-(id<MLBatchProvider>)dataProvider;
-(id)initWithIdentifier:(id)arg1 configuration:(id)arg2 ;
-(PFLNetworkResourceManager *)resourceManager;
-(void)setDataProvider:(id<MLBatchProvider>)arg1 ;
-(id)initWithIdentifier:(id)arg1 configuration:(id)arg2 state:(id)arg3 ;
-(void)_saveState;
-(void)markStateTransition:(id)arg1 ;
-(double)privatizationNormMax;
-(unsigned long long)privatizationNormBinCount;
-(id)metricsIdentifier;
-(double)validationSplit;
-(id)compiledModelURL;
-(id)uploadResultsIdentifier;
-(id<PFLDataSource>)metricsProvider;
-(void)setResourceManager:(PFLNetworkResourceManager *)arg1 ;
-(void)setMetricsProvider:(id<PFLDataSource>)arg1 ;
@end

