/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/EFCancelable.h>
#import <libobjc.A.dylib/EDMessageRepositoryQueryHandler.h>

@protocol EDMessageRepositoryQueryHandler <EDReconciliationQueryProvider,EFCancelable>
@required
-(void)start;
-(void)tearDown;
-(void)test_tearDown;
-(void)requestSummaryForMessageObjectID:(id)arg1;

@end


@protocol EMMessageListItemQueryResultsObserver;
@class NSSet, EFQuery, EDMessagePersistence, EDPersistenceHookRegistry, EMObjectID, EFLocked, NSString;

@interface EDMessageRepositoryQueryHandler : NSObject <EFCancelable, EDMessageRepositoryQueryHandler> {

	atomic_flag _didStart;
	NSSet* _mailboxes;
	EFQuery* _query;
	EDMessagePersistence* _messagePersistence;
	EDPersistenceHookRegistry* _hookRegistry;
	id<EMMessageListItemQueryResultsObserver> _resultsObserver;
	EMObjectID* _observationIdentifier;
	long long _dateSortOrder;
	EFLocked* _summaryLoadersMapTable;

}

@property (nonatomic,retain) EFLocked * summaryLoadersMapTable;                                        //@synthesize summaryLoadersMapTable=_summaryLoadersMapTable - In the implementation block
@property (nonatomic,copy,readonly) EFQuery * query;                                                   //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) EDMessagePersistence * messagePersistence;                              //@synthesize messagePersistence=_messagePersistence - In the implementation block
@property (nonatomic,readonly) EDPersistenceHookRegistry * hookRegistry;                               //@synthesize hookRegistry=_hookRegistry - In the implementation block
@property (nonatomic,readonly) id<EMMessageListItemQueryResultsObserver> resultsObserver;              //@synthesize resultsObserver=_resultsObserver - In the implementation block
@property (nonatomic,readonly) EMObjectID * observationIdentifier;                                     //@synthesize observationIdentifier=_observationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * mailboxes;                                                 //@synthesize mailboxes=_mailboxes - In the implementation block
@property (nonatomic,readonly) long long dateSortOrder;                                                //@synthesize dateSortOrder=_dateSortOrder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(EFQuery *)query;
-(void)start;
-(void)cancel;
-(void)tearDown;
-(EDPersistenceHookRegistry *)hookRegistry;
-(EDMessagePersistence *)messagePersistence;
-(void)test_tearDown;
-(NSSet *)mailboxes;
-(id)initWithQuery:(id)arg1 messagePersistence:(id)arg2 hookRegistry:(id)arg3 observer:(id)arg4 observationIdentifier:(id)arg5 ;
-(id<EMMessageListItemQueryResultsObserver>)resultsObserver;
-(EMObjectID *)observationIdentifier;
-(id)_distinctObjectIDs:(id)arg1 queryHandlerLog:(id)arg2 ;
-(void)requestSummaryForMessageObjectID:(id)arg1 ;
-(long long)dateSortOrder;
-(id)messageReconciliationQueries;
-(id)threadReconciliationQueries;
-(EFLocked *)summaryLoadersMapTable;
-(void)setSummaryLoadersMapTable:(EFLocked *)arg1 ;
@end

