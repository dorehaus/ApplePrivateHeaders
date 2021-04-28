/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/Versions/A/ShazamKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ShazamKit/ShazamKit-Structs.h>
@interface MRE : NSObject {

	void* _mreInstance;

}

@property (assign,nonatomic) void* mreInstance;              //@synthesize mreInstance=_mreInstance - In the implementation block
-(void)dealloc;
-(id)initWithSignatures:(id)arg1 density:(long long)arg2 error:(id*)arg3 ;
-(id)search:(id)arg1 error:(id*)arg2 ;
-(void)setMreInstance:(void*)arg1 ;
-(BOOL)FillUnknownError:(id*)arg1 ;
-(BOOL)ConvertException:(const exception*)arg1 toError:(id*)arg2 ;
-(BOOL)ConvertSystemError:(const system_error*)arg1 toError:(id*)arg2 ;
-(id)initWithMREInstance:(MREInstance*)arg1 error:(id*)arg2 ;
-(void*)mreInstance;
@end

