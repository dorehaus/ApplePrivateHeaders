/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MLCompute.framework/Versions/A/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSFileHandle;

@interface _MLCANEWeightFileOps : NSObject {

	NSString* _filePath;
	NSFileHandle* _fileHandle;
	unsigned long long _currentDataSizeInBytes;
	unsigned long long _currentPaddingSizeInBytes;
	unsigned long long _currentFileSizeInBytes;

}

@property (assign,nonatomic) unsigned long long currentDataSizeInBytes;                 //@synthesize currentDataSizeInBytes=_currentDataSizeInBytes - In the implementation block
@property (assign,nonatomic) unsigned long long currentPaddingSizeInBytes;              //@synthesize currentPaddingSizeInBytes=_currentPaddingSizeInBytes - In the implementation block
@property (assign,nonatomic) unsigned long long currentFileSizeInBytes;                 //@synthesize currentFileSizeInBytes=_currentFileSizeInBytes - In the implementation block
@property (nonatomic,retain,readonly) NSString * filePath;                              //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,retain,readonly) NSFileHandle * fileHandle;                        //@synthesize fileHandle=_fileHandle - In the implementation block
+(id)weightFileOpsAtPath:(id)arg1 ;
-(NSString *)filePath;
-(long long)writeData:(id)arg1 ;
-(NSFileHandle *)fileHandle;
-(id)initWithFilePath:(id)arg1 ;
-(unsigned long long)currentFileSizeInBytes;
-(unsigned long long)currentPaddingSizeInBytes;
-(void)setCurrentPaddingSizeInBytes:(unsigned long long)arg1 ;
-(unsigned long long)currentDataSizeInBytes;
-(void)setCurrentDataSizeInBytes:(unsigned long long)arg1 ;
-(void)setCurrentFileSizeInBytes:(unsigned long long)arg1 ;
-(long long)writeTensor:(id)arg1 ;
@end
