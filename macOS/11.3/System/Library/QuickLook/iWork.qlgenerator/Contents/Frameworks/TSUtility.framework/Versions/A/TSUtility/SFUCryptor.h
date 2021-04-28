/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSUtility.framework/Versions/A/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@interface SFUCryptor : NSObject {

	int mOperation;
	CCCryptorRef mCryptor;
	unsigned long long mBlockSize;
	char mFinished;
	char* mDecryptionInputBuffer;
	char* mOutputBuffer;
	char* mOutputBufferPos;
	unsigned long long mOutputBufferAvailable;

}
-(void)dealloc;
-(id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char*)arg3 ivLength:(unsigned long long)arg4 ;
-(char)cryptDataFromStream:(id)arg1 toBuffer:(char*)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long*)arg4 error:(id*)arg5 ;
-(char)cryptDataFromBuffer:(const char*)arg1 length:(unsigned long long)arg2 toStream:(id)arg3 finished:(char)arg4 crc32:(unsigned*)arg5 error:(id*)arg6 ;
-(id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char*)arg3 ivLength:(unsigned long long)arg4 usePKCS7Padding:(char)arg5 ;
-(char)cryptDataFromBuffer:(const char*)arg1 length:(unsigned long long)arg2 toStream:(id)arg3 finished:(char)arg4 error:(id*)arg5 ;
@end

