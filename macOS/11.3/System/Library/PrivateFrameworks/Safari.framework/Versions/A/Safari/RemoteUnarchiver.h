/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSDownloadFileUnarchiver.h>

@class SafariSandboxBrokerConnection, NSString;

@interface RemoteUnarchiver : WBSDownloadFileUnarchiver {

	SafariSandboxBrokerConnection* _connection;
	unsigned long long _fileType;
	NSString* _uuid;

}
-(void)unarchive;
-(char)canInterruptUnarchiving;
-(void)interruptUnarchiving;
-(id)initWithSourcePath:(id)arg1 fileType:(unsigned long long)arg2 ;
@end

