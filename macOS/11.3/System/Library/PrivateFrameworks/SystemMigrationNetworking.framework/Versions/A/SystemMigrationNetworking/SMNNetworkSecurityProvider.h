/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigrationNetworking.framework/Versions/A/SystemMigrationNetworking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SMNNetworkSecurityProvider <NSObject>
@required
-(void)setDelegate:(id)arg1;
-(long long)writeData:(void*)arg1 length:(unsigned long long)arg2;
-(long long)readData:(void*)arg1 length:(unsigned long long)arg2;
-(id)initWithQueueName:(id)arg1;
-(char)initializeSecurityOnFileDescriptor:(int)arg1 withRole:(unsigned long long)arg2;

@end

