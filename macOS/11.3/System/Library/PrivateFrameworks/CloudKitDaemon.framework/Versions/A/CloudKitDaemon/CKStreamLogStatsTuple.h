/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CKStreamLogStatsTuple : NSObject {

	NSString* _fileAndLine;
	unsigned long long _count;
	unsigned long long _size;

}

@property (nonatomic,retain) NSString * fileAndLine;                //@synthesize fileAndLine=_fileAndLine - In the implementation block
@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned long long size;               //@synthesize size=_size - In the implementation block
-(unsigned long long)size;
-(unsigned long long)count;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(NSString *)fileAndLine;
-(void)setFileAndLine:(NSString *)arg1 ;
@end

