/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/Versions/A/PrintKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface _PK_OneShotXPC : NSObject {

	NSXPCConnection* _pkBrowseConnection;

}

@property (nonatomic,retain) NSXPCConnection * pkBrowseConnection;              //@synthesize pkBrowseConnection=_pkBrowseConnection - In the implementation block
+(char)withTimeout:(int)arg1 doSyncronousOneShot:(/*^block*/id)arg2 ;
+(void)doOneShot:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSXPCConnection *)pkBrowseConnection;
-(void)setPkBrowseConnection:(NSXPCConnection *)arg1 ;
@end
