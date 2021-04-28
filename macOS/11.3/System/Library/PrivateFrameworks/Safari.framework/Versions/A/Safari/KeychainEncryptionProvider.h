/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EncryptionProvider.h>

@protocol OS_dispatch_queue;
@class NSString, NSData, NSObject;

@interface KeychainEncryptionProvider : NSObject <EncryptionProvider> {

	NSString* _keychainLabel;
	NSData* _encryptionKey;
	NSObject*<OS_dispatch_queue> _internalQueue;

}
-(id)init;
-(id)encryptData:(id)arg1 ;
-(id)decryptData:(id)arg1 ;
-(id)initWithKeychainLabel:(id)arg1 ;
-(id)ensureEncryptionKey;
-(id)_findExistingEncryptionKey;
-(id)_generateEncryptionKey;
@end

