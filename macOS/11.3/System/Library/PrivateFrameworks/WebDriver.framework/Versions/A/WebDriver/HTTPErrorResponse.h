/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebDriver.framework/Versions/A/WebDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HTTPResponse.h>

@interface HTTPErrorResponse : NSObject <HTTPResponse> {

	long long _status;

}
-(unsigned long long)offset;
-(long long)status;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(void)setOffset:(unsigned long long)arg1 ;
-(char)isDone;
-(unsigned long long)contentLength;
-(id)initWithErrorCode:(int)arg1 ;
@end

