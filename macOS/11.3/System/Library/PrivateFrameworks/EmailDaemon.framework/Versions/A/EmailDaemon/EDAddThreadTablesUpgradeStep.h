/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EDTableUpgradeStep.h>

@class NSString;

@interface EDAddThreadTablesUpgradeStep : NSObject <EDTableUpgradeStep>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)runWithConnection:(id)arg1 ;
+(id)threadScopesTableSchema;
+(id)threadsTableSchema;
+(id)threadMailboxesTableSchema;
+(id)threadSendersTableSchema;
+(id)threadRecipientsTableSchema;
+(id)_schemaWithMessagesTable:(id)arg1 mailboxesTable:(id)arg2 conversationsTable:(id)arg3 ;
@end
