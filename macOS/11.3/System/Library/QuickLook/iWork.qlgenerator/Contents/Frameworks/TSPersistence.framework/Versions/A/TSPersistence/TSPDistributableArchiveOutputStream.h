/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFUSimpleOutputStream;
#import <TSPersistence/TSPersistence-Structs.h>
@interface TSPDistributableArchiveOutputStream : NSObject {

	id<SFUSimpleOutputStream> _outputStream;
	long long _offset;
	char _doneWritingObjectEntries;
	char _doneWritingFileDescriptorProtos;
	char _doneWritingClassInfoMap;
	char _descriptorsEnabled;
	char _tocEnabled;

}
-(id)initWithOutputStream:(id)arg1 checkCrc:(unsigned)arg2 enableDescriptors:(char)arg3 enableToc:(char)arg4 closedCleanly:(char)arg5 archivedVersions:(SCD_Struct_TS270)arg6 ;
-(char)writeEntry:(id)arg1 offset:(long long*)arg2 headerLength:(unsigned*)arg3 error:(id*)arg4 ;
@end

