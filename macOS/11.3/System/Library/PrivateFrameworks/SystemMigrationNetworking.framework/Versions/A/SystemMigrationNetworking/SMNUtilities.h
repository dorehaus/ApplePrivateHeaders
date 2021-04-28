/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigrationNetworking.framework/Versions/A/SystemMigrationNetworking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SystemMigrationNetworking/SystemMigrationNetworking-Structs.h>
@interface SMNUtilities : NSObject
+(id)humanReadableInterfaceType:(int)arg1 ;
+(int)findAvailablePortFrom:(int)arg1 addressFamily:(int)arg2 keepBound:(char)arg3 fd:(int*)arg4 ;
+(void)acceptSocketConnection:(int*)arg1 ofFamily:(int)arg2 shouldAcceptBlock:(/*^block*/id)arg3 didAcceptBlock:(/*^block*/id)arg4 ;
+(id)humanReadableIPAddress:(sockaddr*)arg1 ;
+(int)connectSocketAddress:(id)arg1 ;
+(char)isBSDInterfaceNameThunderbolt:(id)arg1 ;
+(char)writeCompletelyToFd:(int)arg1 buffer:(const void*)arg2 length:(unsigned long long)arg3 ;
+(char)readCompletelyFromFd:(int)arg1 buffer:(void*)arg2 length:(unsigned long long)arg3 ;
@end

