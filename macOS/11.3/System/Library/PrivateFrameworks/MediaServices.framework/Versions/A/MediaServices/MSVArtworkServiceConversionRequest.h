/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/Versions/A/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaServices/MSVArtworkServiceRequest.h>

@class NSURL;

@interface MSVArtworkServiceConversionRequest : MSVArtworkServiceRequest {

	NSURL* _sourceURL;
	NSURL* _destinationURL;
	long long _destinationFormat;
	double _destinationCompressionQuality;

}

@property (nonatomic,copy) NSURL * sourceURL;                                   //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,copy) NSURL * destinationURL;                              //@synthesize destinationURL=_destinationURL - In the implementation block
@property (assign,nonatomic) long long destinationFormat;                       //@synthesize destinationFormat=_destinationFormat - In the implementation block
@property (assign,nonatomic) double destinationCompressionQuality;              //@synthesize destinationCompressionQuality=_destinationCompressionQuality - In the implementation block
+(char)supportsSecureCoding;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)operationClass;
-(NSURL *)destinationURL;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(void)setSourceURL:(NSURL *)arg1 ;
-(long long)operationPriority;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 destinationFormat:(long long)arg3 ;
-(long long)destinationFormat;
-(void)setDestinationFormat:(long long)arg1 ;
-(double)destinationCompressionQuality;
-(void)setDestinationCompressionQuality:(double)arg1 ;
@end
