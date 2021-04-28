/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ScreenTime.framework/Versions/A/ScreenTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSXPCConnection;

@interface STWebHistory : NSObject {

	NSString* _bundleIdentifier;
	NSXPCConnection* _xpcConnection;

}

@property (copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSXPCConnection * xpcConnection;               //@synthesize xpcConnection=_xpcConnection - In the implementation block
-(id)init;
-(NSXPCConnection *)xpcConnection;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)deleteAllHistory;
-(void)deleteHistoryForURL:(id)arg1 ;
-(void)deleteHistoryDuringInterval:(id)arg1 ;
@end

