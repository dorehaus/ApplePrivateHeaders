/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Versions/A/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EMRemoteConnection;

@interface EMFetchController : NSObject {

	EMRemoteConnection* _connection;

}

@property (retain) EMRemoteConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)remoteInterface;
-(EMRemoteConnection *)connection;
-(void)setConnection:(EMRemoteConnection *)arg1 ;
-(id)diagnosticInformation;
-(id)initWithRemoteConnection:(id)arg1 ;
-(void)performFetchOfType:(int)arg1 ;
-(void)setCurrentSuppressionContexts:(id)arg1 suppressedContexts:(id)arg2 ;
-(void)performFetchOfType:(int)arg1 mailboxes:(id)arg2 ;
-(void)performFetchOfType:(int)arg1 accounts:(id)arg2 ;
@end

