/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ModelIO.framework/Versions/A/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ModelIO/ModelIO-Structs.h>
@interface MDLMemoryMappedData : NSObject {

	_sFILE* _file;
	char* _mappedAddr;
	char* _fileStart;
	long long _mappedFileSize;
	long long _length;

}
-(void)dealloc;
-(id)initWithURL:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 ;
-(id)dataNoCopy;
@end
