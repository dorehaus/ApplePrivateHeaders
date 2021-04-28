/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/Versions/A/RTTUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface RTTServiceUpdate : NSObject {

	NSString* _serviceUpdateType;
	NSDictionary* _options;

}

@property (nonatomic,retain) NSString * serviceUpdateType;              //@synthesize serviceUpdateType=_serviceUpdateType - In the implementation block
@property (nonatomic,retain) NSDictionary * options;                    //@synthesize options=_options - In the implementation block
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(NSString *)serviceUpdateType;
-(id)initWithServiceUpdateType:(id)arg1 options:(id)arg2 ;
-(id)optionValueForKey:(id)arg1 ;
-(void)setServiceUpdateType:(NSString *)arg1 ;
@end
