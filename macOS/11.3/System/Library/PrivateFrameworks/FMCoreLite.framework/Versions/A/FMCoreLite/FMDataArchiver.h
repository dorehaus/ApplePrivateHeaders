/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/Versions/A/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSData;

@interface FMDataArchiver : NSObject {

	char _backedUp;
	char _createDirectories;
	long long _dataProtectionClass;
	NSURL* _fileURL;
	NSData* _unitTestData;

}

@property (nonatomic,retain) NSURL * fileURL;                            //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSData * unitTestData;                        //@synthesize unitTestData=_unitTestData - In the implementation block
@property (assign,nonatomic) long long dataProtectionClass;              //@synthesize dataProtectionClass=_dataProtectionClass - In the implementation block
@property (assign,nonatomic) char backedUp;                              //@synthesize backedUp=_backedUp - In the implementation block
@property (assign,nonatomic) char createDirectories;                     //@synthesize createDirectories=_createDirectories - In the implementation block
+(id)defaultClasses;
-(void)setUnitTestData:(NSData *)arg1 ;
-(id)readDataOfClasses:(id)arg1 error:(id*)arg2 ;
-(id)underlyingDataWithError:(id*)arg1 ;
-(NSData *)unitTestData;
-(id)saveObject:(id)arg1 ;
-(char)backedUp;
-(void)injectUnitTestData:(id)arg1 ;
-(char)saveArray:(id)arg1 error:(id*)arg2 ;
-(char)saveDictionary:(id)arg1 error:(id*)arg2 ;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
-(long long)dataProtectionClass;
-(void)setDataProtectionClass:(long long)arg1 ;
-(char)createDirectories;
-(void)setBackedUp:(char)arg1 ;
-(void)setCreateDirectories:(char)arg1 ;
-(id)saveDictionary:(id)arg1 ;
-(id)readDictionaryAndClasses:(id)arg1 error:(id*)arg2 ;
-(id)saveArray:(id)arg1 ;
-(id)readArrayAndClasses:(id)arg1 error:(id*)arg2 ;
@end
