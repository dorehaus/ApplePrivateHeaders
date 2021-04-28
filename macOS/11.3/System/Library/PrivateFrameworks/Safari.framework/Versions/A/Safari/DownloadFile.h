/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSData, NSURL;

@interface DownloadFile : NSObject {

	long long _type;
	char _isAliasOrSymlink;
	char _isSubFile;
	char _isTrashed;
	NSString* _initialDownloadPath;
	NSDictionary* _securityAssessment;
	NSData* _bookmarkData;

}

@property (nonatomic,copy) NSString * path;                                         //@synthesize initialDownloadPath=_initialDownloadPath - In the implementation block
@property (nonatomic,copy,readonly) NSData * bookmarkData;                          //@synthesize bookmarkData=_bookmarkData - In the implementation block
@property (nonatomic,copy,readonly) NSString * aliasedOrOriginalPath; 
@property (nonatomic,readonly) NSURL * aliasedOrOriginalURL; 
@property (nonatomic,readonly) char isArchive; 
@property (nonatomic,readonly) char isBOM; 
@property (nonatomic,readonly) char isGZIP; 
@property (assign,nonatomic) char isSubFile;                                        //@synthesize isSubFile=_isSubFile - In the implementation block
@property (assign,nonatomic) char isTrashed;                                        //@synthesize isTrashed=_isTrashed - In the implementation block
@property (nonatomic,readonly) char isMovableOrRemovable; 
@property (nonatomic,copy,readonly) NSDictionary * securityAssessment;              //@synthesize securityAssessment=_securityAssessment - In the implementation block
+(id)filesForUnarchivedFileAtPath:(id)arg1 ;
-(id)description;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(char)isTrashed;
-(NSData *)bookmarkData;
-(void)setIsSubFile:(char)arg1 ;
-(id)_MIMETypeFromExtension;
-(char)_isMIMEType:(id)arg1 ;
-(void)_setInitialDownloadPath:(id)arg1 ;
-(void)_setType;
-(NSURL *)aliasedOrOriginalURL;
-(char)_isBOM;
-(char)_isGZIP;
-(char)isSubFile;
-(id)initWithBookmarkData:(id)arg1 pathString:(id)arg2 ;
-(NSString *)aliasedOrOriginalPath;
-(char)isArchive;
-(char)isBOM;
-(char)isGZIP;
-(void)setTypeWithEncoding:(id)arg1 ;
-(char)isMovableOrRemovable;
-(NSDictionary *)securityAssessment;
-(void)setIsTrashed:(char)arg1 ;
@end
