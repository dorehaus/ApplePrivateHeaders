/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MiniSoftwareUpdate.framework/Versions/A/MiniSoftwareUpdate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSNumber, NSString, PKPackageInfo, PKPackageReference;

@interface MSUPackage : NSObject {

	char _shouldDownload;
	NSURL* _URL;
	NSNumber* _size;
	NSString* _digest;
	NSURL* _metadataURL;
	NSURL* _integrityDataURL;
	NSString* _integrityDataDigest;
	NSNumber* _integrityDataSize;
	NSString* _identifier;
	NSString* _version;
	PKPackageInfo* _packageInfo;

}

@property (retain) NSURL * URL;                                          //@synthesize URL=_URL - In the implementation block
@property (retain) NSNumber * size;                                      //@synthesize size=_size - In the implementation block
@property (retain) NSString * digest;                                    //@synthesize digest=_digest - In the implementation block
@property (retain) NSURL * metadataURL;                                  //@synthesize metadataURL=_metadataURL - In the implementation block
@property (retain) NSURL * integrityDataURL;                             //@synthesize integrityDataURL=_integrityDataURL - In the implementation block
@property (retain) NSString * integrityDataDigest;                       //@synthesize integrityDataDigest=_integrityDataDigest - In the implementation block
@property (retain) NSNumber * integrityDataSize;                         //@synthesize integrityDataSize=_integrityDataSize - In the implementation block
@property (retain) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * version;                                   //@synthesize version=_version - In the implementation block
@property (retain) PKPackageInfo * packageInfo;                          //@synthesize packageInfo=_packageInfo - In the implementation block
@property (assign) char shouldDownload;                                  //@synthesize shouldDownload=_shouldDownload - In the implementation block
@property (readonly) PKPackageReference * packageReference; 
-(NSURL *)integrityDataURL;
-(NSNumber *)integrityDataSize;
-(NSString *)integrityDataDigest;
-(void)setIntegrityDataURL:(NSURL *)arg1 ;
-(void)setIntegrityDataDigest:(NSString *)arg1 ;
-(void)setIntegrityDataSize:(NSNumber *)arg1 ;
-(NSNumber *)size;
-(NSString *)identifier;
-(NSURL *)URL;
-(NSString *)version;
-(void)setURL:(NSURL *)arg1 ;
-(void)setSize:(NSNumber *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)digest;
-(NSURL *)metadataURL;
-(void)setMetadataURL:(NSURL *)arg1 ;
-(PKPackageReference *)packageReference;
-(void)setDigest:(NSString *)arg1 ;
-(PKPackageInfo *)packageInfo;
-(void)setPackageInfo:(PKPackageInfo *)arg1 ;
-(char)shouldDownload;
-(void)setShouldDownload:(char)arg1 ;
@end

