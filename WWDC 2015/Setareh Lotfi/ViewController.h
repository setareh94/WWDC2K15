//
//  ViewController.h
//  Setareh Lotfi
//
//  Created by Setareh Lotfi on 4/10/15.
//  Copyright (c) 2014 setarehlotfi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIScrollViewDelegate> {
    IBOutlet UIScrollView *mainScrollView;
    IBOutlet UIView *mainScrollViewContent;
    BOOL automatedScroll, showedContent, dragging;
    
    IBOutlet UIButton *alertViewBackground;
    UIView *alertViewContent;
    UIImageView *alertViewImage;
    
    IBOutlet UIView *top;
    IBOutlet UIImageView *topProfile, *topBackground;
    IBOutlet UIButton *topProfileButton;
    IBOutlet UILabel *topSwipe, *topName, *topTitle, *topTitleSmall, *topNameSmall;
    IBOutlet UIButton *topLinkedIn,*topGithub, *topTwitter;
   
    IBOutlet UIButton *info;
    
    IBOutlet NSMutableArray *dataOverview, *dataTimeline;
    
    CGRect appOverlayButtonOriginalFrame, appOverlayIconOriginalFrame;
    UIButton *appOverlayButton;
    int selectedIndex;
}

- (IBAction)showAlertView;
- (IBAction)hideAlertView;

@end
