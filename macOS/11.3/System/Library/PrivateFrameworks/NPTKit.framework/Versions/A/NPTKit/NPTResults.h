/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NPTKit.framework/Versions/A/NPTKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NPTKit/NPTKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPTMetricResult, NPTPingResult, NSDictionary;

@interface NPTResults : NSObject <NSSecureCoding, NSCopying> {

	NPTMetricResult* _downloadResults;
	NPTMetricResult* _uploadResults;
	NPTPingResult* _pingResults;
	NSDictionary* _metadata;

}

@property (nonatomic,retain) NPTMetricResult * downloadResults;              //@synthesize downloadResults=_downloadResults - In the implementation block
@property (nonatomic,retain) NPTMetricResult * uploadResults;                //@synthesize uploadResults=_uploadResults - In the implementation block
@property (nonatomic,retain) NPTPingResult * pingResults;                    //@synthesize pingResults=_pingResults - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                        //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSDictionary * asDictionary; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)asDictionary;
-(NPTMetricResult *)downloadResults;
-(NPTMetricResult *)uploadResults;
-(NPTPingResult *)pingResults;
-(void)setDownloadResults:(NPTMetricResult *)arg1 ;
-(void)setUploadResults:(NPTMetricResult *)arg1 ;
-(void)setPingResults:(NPTPingResult *)arg1 ;
@end

