/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/Versions/A/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSData, NSURL;

@interface DEManifest : NSObject {

	char _testOnly;
	NSString* _name;
	NSDictionary* _contents;
	NSData* _summary;
	NSData* _version;
	NSData* _keyVersion;
	unsigned long long _dirDownloadType;
	NSURL* _publicationURL;
	NSURL* _downloadURLPrefix;

}

@property (nonatomic,retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDictionary * contents;                         //@synthesize contents=_contents - In the implementation block
@property (nonatomic,retain) NSData * summary;                                //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSData * version;                                //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSData * keyVersion;                             //@synthesize keyVersion=_keyVersion - In the implementation block
@property (assign,nonatomic) unsigned long long dirDownloadType;              //@synthesize dirDownloadType=_dirDownloadType - In the implementation block
@property (nonatomic,retain) NSURL * publicationURL;                          //@synthesize publicationURL=_publicationURL - In the implementation block
@property (nonatomic,retain) NSURL * downloadURLPrefix;                       //@synthesize downloadURLPrefix=_downloadURLPrefix - In the implementation block
@property (assign,nonatomic) char testOnly;                                   //@synthesize testOnly=_testOnly - In the implementation block
+(id)manifestWithContentsOfURL:(id)arg1 ;
+(id)anyManifestWithContentsOfURL:(id)arg1 wasEncrypted:(char*)arg2 ;
+(id)anyManifestWithContentsOfURL:(id)arg1 encrypted:(char)arg2 ;
+(id)manifestWithContentsOfURL:(id)arg1 encrypted:(char)arg2 filter:(id)arg3 ;
+(id)manifestWithContentsOfURL:(id)arg1 wasEncrypted:(char*)arg2 filter:(id)arg3 ;
+(id)manifestWithContentsOfURL:(id)arg1 encrypted:(char)arg2 allowAllKeys:(char)arg3 filter:(id)arg4 ;
+(id)manifestWithContentsOfURL:(id)arg1 wasEncrypted:(char*)arg2 allowAllKeys:(char)arg3 filter:(id)arg4 ;
+(id)manifestWithContentsOfURL:(id)arg1 encrypted:(char)arg2 ;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSData *)version;
-(NSDictionary *)contents;
-(void)setVersion:(NSData *)arg1 ;
-(void)setContents:(NSDictionary *)arg1 ;
-(void)setSummary:(NSData *)arg1 ;
-(NSData *)summary;
-(NSURL *)publicationURL;
-(void)setPublicationURL:(NSURL *)arg1 ;
-(char)writeToURL:(id)arg1 ;
-(NSURL *)downloadURLPrefix;
-(void)setDownloadURLPrefix:(NSURL *)arg1 ;
-(id)initWithName:(id)arg1 contents:(id)arg2 summary:(id)arg3 dirDownloadType:(unsigned long long)arg4 ;
-(NSData *)keyVersion;
-(char)writeToURL:(id)arg1 keyId:(unsigned long long)arg2 privateKey:(id)arg3 ;
-(unsigned long long)dirDownloadType;
-(char)testOnly;
-(id)initWithName:(id)arg1 contents:(id)arg2 summary:(id)arg3 dirDownloadType:(unsigned long long)arg4 version:(id)arg5 keyVersion:(id)arg6 ;
-(void)setKeyVersion:(NSData *)arg1 ;
-(void)setDirDownloadType:(unsigned long long)arg1 ;
-(void)setTestOnly:(char)arg1 ;
@end

