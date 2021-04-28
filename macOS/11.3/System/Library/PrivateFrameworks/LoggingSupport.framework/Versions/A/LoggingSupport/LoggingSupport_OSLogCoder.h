/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/Versions/A/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <libobjc.A.dylib/OSLogCoder.h>

@interface LoggingSupport_OSLogCoder : NSObject <OSLogCoder> {

	SCD_Struct_Lo28* _fmt_cmd;
	os_trace_blob_s* _ob;
	os_trace_blob_s* _ob_pub;
	os_trace_blob_s* _ob_priv;
	unsigned char _privacy_level;
	os_trace_blob_s* _ob_mask;
	char _maskbuf[128];
	unsigned long long _maxsz;
	unsigned short _written;
	unsigned short _offset;
	BOOL _truncated;
	BOOL _initialized;
	BOOL _mask;

}
-(void)setTruncated;
-(void)setPublic;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)_initBlob;
@end
