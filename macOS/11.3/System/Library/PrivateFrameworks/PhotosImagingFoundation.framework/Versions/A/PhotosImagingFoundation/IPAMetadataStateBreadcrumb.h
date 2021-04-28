/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/Versions/A/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IPAMetadataStateBreadcrumb : NSObject {

	unsigned _qualityOfService;
	double _timeInterval;
	unsigned long long _threadID;
	NSString* _message;

}

@property (readonly) double timeInterval;                                //@synthesize timeInterval=_timeInterval - In the implementation block
@property (readonly) unsigned long long threadID;                        //@synthesize threadID=_threadID - In the implementation block
@property (readonly) unsigned qualityOfService;                          //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (copy,readonly) NSString * message;                            //@synthesize message=_message - In the implementation block
@property (copy,readonly) NSString * breadcrumbDescription; 
-(double)timeInterval;
-(NSString *)message;
-(unsigned)qualityOfService;
-(unsigned long long)threadID;
-(id)initWithTimeInterval:(double)arg1 message:(id)arg2 ;
-(NSString *)breadcrumbDescription;
@end

