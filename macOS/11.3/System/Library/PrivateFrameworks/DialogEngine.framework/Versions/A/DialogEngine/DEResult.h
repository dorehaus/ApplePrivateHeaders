/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/Versions/A/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary, NSNumber;

@interface DEResult : NSObject {

	NSString* _status;
	NSString* _error;
	NSArray* _response;
	NSDictionary* _meta;
	NSNumber* _elapsedTimeMs;
	NSNumber* _elapsedTimeThreadMs;
	NSString* _json;

}

@property (nonatomic,retain) NSString * status;                           //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSString * error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSArray * response;                          //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSDictionary * meta;                         //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSNumber * elapsedTimeMs;                    //@synthesize elapsedTimeMs=_elapsedTimeMs - In the implementation block
@property (nonatomic,retain) NSNumber * elapsedTimeThreadMs;              //@synthesize elapsedTimeThreadMs=_elapsedTimeThreadMs - In the implementation block
@property (nonatomic,retain) NSString * json;                             //@synthesize json=_json - In the implementation block
-(NSString *)error;
-(void)setError:(NSString *)arg1 ;
-(NSString *)status;
-(NSArray *)response;
-(void)setStatus:(NSString *)arg1 ;
-(void)setResponse:(NSArray *)arg1 ;
-(NSDictionary *)meta;
-(NSString *)json;
-(void)setMeta:(NSDictionary *)arg1 ;
-(id)initFromJson:(id)arg1 ;
-(void)setElapsedTimeMs:(NSNumber *)arg1 ;
-(void)setElapsedTimeThreadMs:(NSNumber *)arg1 ;
-(void)setJson:(NSString *)arg1 ;
-(NSNumber *)elapsedTimeMs;
-(NSNumber *)elapsedTimeThreadMs;
@end

