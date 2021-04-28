/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface NUResponse : NSObject {

	id _result;
	NSError* _error;

}

@property (retain) id result;                    //@synthesize result=_result - In the implementation block
@property (retain) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)description;
-(id)init;
-(NSError *)error;
-(id)result;
-(void)setResult:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(id)initWithError:(id)arg1 ;
-(id)initWithResult:(id)arg1 ;
-(id)result:(id*)arg1 ;
@end

