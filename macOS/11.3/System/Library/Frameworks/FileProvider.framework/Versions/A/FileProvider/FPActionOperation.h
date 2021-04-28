/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPOperation.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol FPXOperationService;
@class NSProgress, NSDictionary, NSString, FPStitchingSession, FPItemManager, FPService, NSArray, FPItem;

@interface FPActionOperation : FPOperation <NSProgressReporting> {

	NSDictionary* _itemsByDomainID;
	NSString* _providerIdentifier;
	char _multiProviders;
	unsigned long long _logSection;
	FPStitchingSession* _stitcher;
	unsigned long long _attemptedRecoveryCount;
	char _finishAfterPreflight;
	char _skipPreflight;
	char _setupRemoteOperationService;
	char _haveErrorRecovery;
	char _havePreflight;
	char _haveStitching;
	/*^block*/id _placeholdersCreationBlock;
	/*^block*/id _actionCompletionBlock;
	NSProgress* _progress;
	/*^block*/id _errorRecoveryHandler;
	FPItemManager* _itemManager;
	FPService*<FPXOperationService> _remoteService;
	NSString* _action;
	NSArray* _sourceItemsToPreflight;
	FPItem* _destinationItemToPreflight;

}

@property (nonatomic,retain) FPItemManager * itemManager;                                //@synthesize itemManager=_itemManager - In the implementation block
@property (nonatomic,readonly) FPStitchingSession * stitcher; 
@property (nonatomic,retain) FPService*<FPXOperationService> remoteService;              //@synthesize remoteService=_remoteService - In the implementation block
@property (nonatomic,readonly) id<FPXOperationService> remoteServiceProxy; 
@property (nonatomic,retain) NSProgress * progress;                                      //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) char setupRemoteOperationService;                           //@synthesize setupRemoteOperationService=_setupRemoteOperationService - In the implementation block
@property (assign,nonatomic) char haveErrorRecovery;                                     //@synthesize haveErrorRecovery=_haveErrorRecovery - In the implementation block
@property (assign,nonatomic) char havePreflight;                                         //@synthesize havePreflight=_havePreflight - In the implementation block
@property (assign,nonatomic) char haveStitching;                                         //@synthesize haveStitching=_haveStitching - In the implementation block
@property (nonatomic,copy) NSString * action;                                            //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSArray * sourceItemsToPreflight;                             //@synthesize sourceItemsToPreflight=_sourceItemsToPreflight - In the implementation block
@property (nonatomic,copy) FPItem * destinationItemToPreflight;                          //@synthesize destinationItemToPreflight=_destinationItemToPreflight - In the implementation block
@property (assign,nonatomic) char finishAfterPreflight;                                  //@synthesize finishAfterPreflight=_finishAfterPreflight - In the implementation block
@property (assign,nonatomic) char skipPreflight;                                         //@synthesize skipPreflight=_skipPreflight - In the implementation block
@property (nonatomic,copy) id placeholdersCreationBlock;                                 //@synthesize placeholdersCreationBlock=_placeholdersCreationBlock - In the implementation block
@property (nonatomic,copy) id actionCompletionBlock;                                     //@synthesize actionCompletionBlock=_actionCompletionBlock - In the implementation block
@property (nonatomic,copy) id errorRecoveryHandler;                                      //@synthesize errorRecoveryHandler=_errorRecoveryHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(void)main;
-(NSProgress *)progress;
-(id)operationDescription;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setActionCompletionBlock:(id)arg1 ;
-(void)setSkipPreflight:(char)arg1 ;
-(void)setPlaceholdersCreationBlock:(id)arg1 ;
-(void)setErrorRecoveryHandler:(id)arg1 ;
-(void)setFinishAfterPreflight:(char)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithProvider:(id)arg1 action:(id)arg2 ;
-(void)setHaveStitching:(char)arg1 ;
-(FPStitchingSession *)stitcher;
-(void)actionMain;
-(void)presendNotifications;
-(void)resetStitcher;
-(id)initWithItemsOfDifferentProviders:(id)arg1 action:(id)arg2 ;
-(void)setSetupRemoteOperationService:(char)arg1 ;
-(FPItemManager *)itemManager;
-(id<FPXOperationService>)remoteServiceProxy;
-(char)finishAfterPreflight;
-(void)setSourceItemsToPreflight:(NSArray *)arg1 ;
-(void)setDestinationItemToPreflight:(FPItem *)arg1 ;
-(void)setHavePreflight:(char)arg1 ;
-(void)setHaveErrorRecovery:(char)arg1 ;
-(void)tryRecoveringFromError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)setupRemoteOperationService;
-(NSArray *)sourceItemsToPreflight;
-(FPItem *)destinationItemToPreflight;
-(FPService*<FPXOperationService>)remoteService;
-(void)tryRecoveringFromPreflightErrors:(id)arg1 recoveryHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)runUserInteractionsPreflight:(/*^block*/id)arg1 ;
-(void)subclassPreflightWithCompletion:(/*^block*/id)arg1 ;
-(id)placeholdersCreationBlock;
-(id)replicateForItems:(id)arg1 ;
-(void)_runUserInteractionsPreflight:(/*^block*/id)arg1 ;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)_dispatchToSubOperations;
-(void)_preflightAndRun;
-(void)setRemoteService:(FPService*<FPXOperationService>)arg1 ;
-(id)actionCompletionBlock;
-(char)haveErrorRecovery;
-(id)errorRecoveryHandler;
-(char)skipPreflight;
-(void)setItemManager:(FPItemManager *)arg1 ;
-(char)havePreflight;
-(char)haveStitching;
@end

