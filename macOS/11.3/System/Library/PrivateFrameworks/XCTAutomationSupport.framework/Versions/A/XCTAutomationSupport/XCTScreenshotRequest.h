/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XCTAutomationSupport.framework/Versions/A/XCTAutomationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <XCTAutomationSupport/XCTAutomationSupport-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class XCTImageEncoding;

@interface XCTScreenshotRequest : NSObject <NSSecureCoding> {

	unsigned _screenID;
	XCTImageEncoding* _encoding;
	CGRect _rect;

}

@property (readonly) unsigned screenID;                        //@synthesize screenID=_screenID - In the implementation block
@property (readonly) CGRect rect;                              //@synthesize rect=_rect - In the implementation block
@property (readonly) XCTImageEncoding * encoding;              //@synthesize encoding=_encoding - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(XCTImageEncoding *)encoding;
-(CGRect)rect;
-(unsigned)screenID;
-(id)initWithScreenID:(unsigned)arg1 rect:(CGRect)arg2 encoding:(id)arg3 ;
@end
