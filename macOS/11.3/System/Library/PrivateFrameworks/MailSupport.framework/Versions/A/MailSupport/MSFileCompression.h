/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/Versions/A/MailSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailSupport/MailSupport-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>

@class NSString;

@interface MSFileCompression : NSObject <EFLoggable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(char)compressDirectory:(id)arg1 shouldCancel:(/*^block*/id)arg2 error:(id*)arg3 ;
+(char)compressFile:(id)arg1 error:(id*)arg2 ;
+(char)_compressFile:(const char*)arg1 error:(id*)arg2 ;
+(char)_doCompressFile:(const char*)arg1 errorCode:(long long*)arg2 ;
+(id)_compressionLock;
+(CompressionQueueContext_sRef)_compressionQueueContext;
@end

