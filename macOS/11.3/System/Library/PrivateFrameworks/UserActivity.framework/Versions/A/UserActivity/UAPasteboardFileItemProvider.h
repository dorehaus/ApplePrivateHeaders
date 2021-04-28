/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Versions/A/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UAPasteboardFileItemProviding.h>

@class NSString, NSUUID, NSURL, NSData;

@interface UAPasteboardFileItemProvider : NSObject <UAPasteboardFileItemProviding> {

	char _preferFileRep;
	char _isDir;
	NSString* _type;
	NSUUID* _uuid;
	NSURL* _fileURL;
	NSData* _sandboxExtension;

}

@property (retain) NSURL * fileURL;                                 //@synthesize fileURL=_fileURL - In the implementation block
@property (retain) NSData * sandboxExtension;                       //@synthesize sandboxExtension=_sandboxExtension - In the implementation block
@property (assign) char isDir;                                      //@synthesize isDir=_isDir - In the implementation block
@property (assign,nonatomic) char preferFileRep;                    //@synthesize preferFileRep=_preferFileRep - In the implementation block
@property (nonatomic,copy) NSUUID * uuid;                           //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)conformsToProtocol:(id)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(NSString *)type;
-(void)getDataWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setPreferFileRep:(char)arg1 ;
-(char)preferFileRep;
-(void)getDataFileWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)getFileName;
-(void)setSandboxExtension:(NSData *)arg1 ;
-(void)setIsDir:(char)arg1 ;
-(char)isDir;
-(void)accessFileAtURLWithCompletion:(/*^block*/id)arg1 ;
-(NSData *)sandboxExtension;
-(id)initWithURL:(id)arg1 sandboxExtension:(id)arg2 ;
@end

