/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/Versions/A/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _OSLogDirectoryReference : NSObject {

	int _fd;
	long long _etk;

}

@property (nonatomic,readonly) int fileDescriptor; 
-(id)initWithDescriptor:(int)arg1 sandboxExtensionToken:(const char*)arg2 ;
-(void)dealloc;
-(void)close;
-(int)fileDescriptor;
-(id)initWithDescriptor:(int)arg1 ;
@end

