//
//  GTViewController.h
//  example
//
//  Created by Tim McHale on 5/21/14.
//  Copyright (c) 2014 Gramercy Consultants. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GTViewController : UIViewController
{
    UIScrollView* scrollView;
        UIPageControl* pageControl;
}

@property (nonatomic, retain) IBOutlet UIScrollView* scrollView;
@property (nonatomic, retain) IBOutlet UIPageControl* pageControl;


@end
