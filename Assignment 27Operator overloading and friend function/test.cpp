bool operator==(Time X)
    {
      if(hours==X.hours && minutes==X.minutes && seconds==X.seconds)
      {
        return true;
      }
      else
      {
        return false;
      }
    }