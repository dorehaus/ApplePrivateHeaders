/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/Versions/A/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreBluetooth/CoreBluetooth-Structs.h>
@class NSError, NSArray;

@interface CBWriteRequest : NSObject {

	NSError* _error;
	iovec* _iov[16];
	iovec* _iop;
	int _ion;
	unsigned long long _offset;
	char _endOfData;
	/*^block*/id _completion;
	NSArray* _dataArray;

}

@property (nonatomic,copy) id completion;                      //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSArray * dataArray;              //@synthesize dataArray=_dataArray - In the implementation block
@property (assign,nonatomic) char endOfData;                   //@synthesize endOfData=_endOfData - In the implementation block
@property (nonatomic,readonly) NSError * error;                //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(NSArray *)dataArray;
-(char)endOfData;
-(void)setEndOfData:(char)arg1 ;
-(void)setDataArray:(NSArray *)arg1 ;
@end

