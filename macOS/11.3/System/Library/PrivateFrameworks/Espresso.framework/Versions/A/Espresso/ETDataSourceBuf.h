/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Versions/A/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Espresso/Espresso-Structs.h>
#import <libobjc.A.dylib/ETDataSource.h>

@interface ETDataSourceBuf : NSObject <ETDataSource> {

	map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::shared_ptr<Espresso::blob<float, 2>>, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::shared_ptr<Espresso::blob<float, 2>>>>>* blobs;
	int number_of_data_points;

}
-(int)numberOfDataPoints;
-(id)dataPointAtIndex:(int)arg1 ;
-(void)setBlobs:(const map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, int, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, int>>>*)arg1 numberOfDataPoints:(int)arg2 nonBatches:(const vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>>*)arg3 ;
-(float*)dataAtIndex:(unsigned long long)arg1 key:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>*)arg2 ;
@end

