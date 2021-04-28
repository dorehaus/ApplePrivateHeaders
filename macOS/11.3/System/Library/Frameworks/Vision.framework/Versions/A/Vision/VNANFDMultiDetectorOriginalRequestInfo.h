/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VNANFDMultiDetectorOriginalRequestInfo : NSObject {

	NSString* _requestRevisionKey;
	unsigned long long _originalRequestResultsIndex;

}

@property (readonly) NSString * requestRevisionKey;                               //@synthesize requestRevisionKey=_requestRevisionKey - In the implementation block
@property (readonly) unsigned long long originalRequestResultsIndex;              //@synthesize originalRequestResultsIndex=_originalRequestResultsIndex - In the implementation block
+(id)requestClassToMultiDetectorClassPerRequestRevision;
-(id)initWithProcessingOptionRequestRevisionKey:(id)arg1 originalRequestResultsIndex:(unsigned long long)arg2 ;
-(NSString *)requestRevisionKey;
-(unsigned long long)originalRequestResultsIndex;
@end

